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
  gem.version       = Motion::Yandexmapkit::VERSION
end
