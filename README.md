# Szkye's DWM build

## FAQ
>Dependencies?

Some binds launch `firefox` and `gnome-calculator`. Edit `config.h` if you use something else.

>App launcher?

This build uses `rofi` instead of `dmenu`.

>Status bar?

This build uses  my own ``dwmblocks`` build. You can edit my build in ``dwm/dwmblocks``.

### Installation
##### DWM
```
git clone https://github.com/szkye/dwm
cd dwm
sudo make install
```
##### DWMBLOCKS
```
cd dwm/dwmblocks
sudo make install
mv .status/ ~
```
