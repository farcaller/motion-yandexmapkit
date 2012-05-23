# Motion::YandexMapKit

This gem provides YandexMapKit support for RubyMotion. YandexMapKit is MapKit-like framework based on Yandex.com own maps and navigation data.

## Installation

### Update your Rakefile

```ruby
require 'motion-yandexmapkit'
```

### Install the map support files into your resources

```bash
$ rake yandexmapkit:install
```

### Get the API key

You can obtain the API key by mailing [support@mobmaps.yandex.ru](mailto:support@mobmaps.yandex.ru) with subject "Yandex.Mobmaps" and a description of your plans on using the framework.

## Sample Project

Please check the [official demo](https://github.com/yandexmobile/yandexmapkit-ios/) for now.

### Small demo

```ruby
class MapController < UIViewController
  def loadView
    self.view = YMKMapView.alloc.init
    self.view.apiKey = '...'
  end
end
```