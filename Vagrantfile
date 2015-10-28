# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.configure(2) do |config|
  config.vm.box = "lamp"

  # Change this to avoid collisions, if necessary.
  config.vm.network "private_network", ip: "192.168.33.10"
  config.vm.hostname = "local.midcamp.org"
  config.vm.synced_folder "vagrant", "/vagrant"

  config.vm.synced_folder ".", "/midcamp-website-nfs", type: :nfs, create: true
  config.bindfs.bind_folder "/midcamp-website-nfs", "/var/www/midcamp-website", :mirror => "@www-data"

  config.vm.provider "virtualbox" do |vb|
    # Display the VirtualBox GUI when booting the machine
    # vb.gui = true

    # Customize the amount of memory on the VM:
    vb.memory = "2048"
  end
end
