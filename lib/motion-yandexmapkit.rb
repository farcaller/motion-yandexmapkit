require "motion-yandexmapkit/version"

Motion::Project::App.setup do |app|
  yandexMapKitRoot = File.expand_path(File.dirname(__FILE__) + '/../YandexMapKit')
  app.vendor_project(yandexMapKitRoot, :static, headers_dir: 'Headers')
  
  my_frameworks = ['AVFoundation', 'CoreData', 'CoreLocation', 'QuartzCore', 'MessageUI',
    'OpenGLES', 'Security', 'SystemConfiguration']
  
  my_libs = ['/usr/lib/libsqlite3.dylib', '/usr/lib/libstdc++.dylib', '/usr/lib/libxml2.dylib', '/usr/lib/libz.dylib']
    
  app.frameworks |= my_frameworks
  app.libs |= my_libs
end

namespace :yandexmapkit do
  desc "Install YandexMapKit support files"
  task :install do
    FileUtils.cp_r(File.expand_path(File.dirname(__FILE__) + '/../YandexMapKit/YandexMapKit.bundle'),
      Motion::Project::App.config.resources_dir + '/YandexMapKit.bundle')
    puts "Installed YandexMapKit support files to resources/ dir"
  end
end