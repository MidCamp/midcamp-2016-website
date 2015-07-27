<?php

/**
 * Description of EfqHelper
 */
class EfqHelper extends EntityFieldQuery {

  // Identifies the entity type this query is querying for.
  protected $entity_type;
  // Result of the underlying EntityFieldQuery, computed once then held onto
  // throughout the life of the object.
  protected $raw = NULL;
  // Result of the underlying EntityFieldQuery, loaded into fully-populated 
  // entities. This is computed once then held onto throughout the life of the
  // object.
  protected $result = NULL;
  // First result of the underlying EntityFieldQuery, loaded into a 
  // fully-populated entity. This is computed once then held onto throughout the 
  // life of the object.
  protected $first = NULL;
  // IDs of the entities returned by the underlying EntityFieldQuery. This is
  // computed once then held onto throughout the life of the object.
  protected $ids = NULL;

  public function __construct($entity_type) {
    $this->entity_type = $entity_type;
    $this->entityCondition('entity_type', $entity_type);
  }

  /**
   * Wrapper around EntityFieldQuery->execute().
   *
   * Ensures query is only ran once.
   */
  public function execute() {
    if ($this->raw === NULL) {
      $this->raw = parent::execute();
    }
    return $this->raw;
  }

  /**
   * Loads the IDs for entities returned by the EFQ.
   */
  public function ids() {
    if ($this->ids === NULL) {
      $raw = $this->execute();
      if (!empty($raw[$this->entity_type])) {
        $this->ids = array_keys($raw[$this->entity_type]);
      }
      else {
        $this->ids = array();
      }
    }
    return $this->ids;
  }

  /**
   * Loads the full object data for entities returned by the EFQ.
   */
  public function result() {
    if ($this->result === NULL) {
      $raw = $this->execute();
      if (!empty($raw[$this->entity_type])) {
        $this->result = entity_load($this->entity_type, $this->ids());
      }
      else {
        $this->result = array();
      }
    }
    return $this->result;
  }

  /**
   * Loads the full entity of the first result.
   */
  public function first() {
    if ($this->first === NULL) {
      $ids = $this->ids();
      if (!empty($ids)) {
        $etid = reset($ids);
        $this->first = entity_load_single($this->entity_type, $etid);
      }
    }
    return $this->first;
  }

}
