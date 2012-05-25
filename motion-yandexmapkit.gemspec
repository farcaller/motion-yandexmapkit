# -*- encoding: utf-8 -*-
require File.expand_path('../lib/motion-yandexmapkit/version', __FILE__)

Gem::Specification.new do |gem|
  gem.authors       = ["Vladimir Pouzanov"]
  gem.email         = ["farcaller@gmail.com"]
  gem.description   = "YandexMapKit for RubyMotion"
  gem.summary       = "YandexMapKit for RubyMotion"
  gem.homepage      = ""

  gem.files         = `git ls-files`.split($\)
  gem.executables   = gem.files.grep(%r{^bin/}).map{ |f| File.basename(f) }
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.name          = "motion-yandexmapkit"
  gem.require_paths = ["lib"]
  gem.version       = Motion::YandexMapKit::VERSION
  
  gem.motion(gem.name) do |motion|
    root_path = File.expand_path('..', __FILE__)
    yandexMapKitRoot = File.join(root_path, 'YandexMapKit')

    motion.vendor_project(yandexMapKitRoot, :static, headers_dir: 'Headers')

    motion.frameworks = [
      'AVFoundation', 'CoreData', 'CoreLocation', 'QuartzCore', 'MessageUI',
      'OpenGLES', 'Security', 'SystemConfiguration'
    ]

    motion.libs = [
      '/usr/lib/libsqlite3.dylib', '/usr/lib/libstdc++.dylib',
      '/usr/lib/libxml2.dylib', '/usr/lib/libz.dylib'
    ]
    
    motion.resources_dir = File.join(root_path, 'resources')
  end if gem.respond_to?(:motion)
end
