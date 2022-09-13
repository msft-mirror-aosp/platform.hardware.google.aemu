/* this file is automatically generated from 'hardware-properties.ini'
 * DO NOT EDIT IT. To re-generate it, use android/scripts/gen-hw-config.py'
 */
#ifndef HWCFG_INT
#error  HWCFG_INT not defined
#endif
#ifndef HWCFG_STRING
#error  HWCFG_STRING not defined
#endif
#ifndef HWCFG_BOOL
#error  HWCFG_BOOL not defined
#endif
#ifndef HWCFG_DISKSIZE
#error  HWCFG_DISKSIZE not defined
#endif
#ifndef HWCFG_DOUBLE
#error  HWCFG_DOUBLE not defined
#endif

HWCFG_STRING(
  hw_cpu_arch,
  "hw.cpu.arch",
  "arm",
  "CPU Architecture",
  "The CPU Architecture to emulator")

HWCFG_STRING(
  hw_cpu_model,
  "hw.cpu.model",
  "",
  "CPU model",
  "The CPU model (QEMU-specific string)")

HWCFG_INT(
  hw_cpu_ncore,
  "hw.cpu.ncore",
  2,
  "SMP CPU core count",
  "Number of cores in a simulated SMP CPU.")

HWCFG_INT(
  hw_ramSize,
  "hw.ramSize",
  0,
  "Device ram size",
  "The amount of physical RAM on the device, in megabytes.")

HWCFG_STRING(
  hw_screen,
  "hw.screen",
  "multi-touch",
  "Touch screen type",
  "Defines type of the screen.")

HWCFG_BOOL(
  hw_mainKeys,
  "hw.mainKeys",
  "yes",
  "Hardware Back/Home keys",
  "Whether there are hardware back/home keys on the device.")

HWCFG_BOOL(
  hw_trackBall,
  "hw.trackBall",
  "yes",
  "Track-ball support",
  "Whether there is a trackball on the device.")

HWCFG_BOOL(
  hw_keyboard,
  "hw.keyboard",
  "no",
  "Keyboard support",
  "Whether the device has a QWERTY keyboard.")

HWCFG_BOOL(
  hw_keyboard_lid,
  "hw.keyboard.lid",
  "yes",
  "Keyboard lid support",
  "Whether the QWERTY keyboard can be opened/closed.")

HWCFG_STRING(
  hw_keyboard_charmap,
  "hw.keyboard.charmap",
  "qwerty2",
  "Keyboard charmap name",
  "Name of the system keyboard charmap file.")

HWCFG_BOOL(
  hw_dPad,
  "hw.dPad",
  "yes",
  "DPad support",
  "Whether the device has DPad keys")

HWCFG_BOOL(
  hw_rotaryInput,
  "hw.rotaryInput",
  "no",
  "Rotary input support",
  "Whether the device has rotary input")

HWCFG_BOOL(
  hw_gsmModem,
  "hw.gsmModem",
  "yes",
  "GSM modem support",
  "Whether there is a GSM modem in the device.")

HWCFG_BOOL(
  hw_gps,
  "hw.gps",
  "yes",
  "GPS support",
  "Whether there is a GPS in the device.")

HWCFG_BOOL(
  hw_battery,
  "hw.battery",
  "yes",
  "Battery support",
  "Whether the device can run on a battery.")

HWCFG_BOOL(
  hw_accelerometer,
  "hw.accelerometer",
  "yes",
  "Accelerometer",
  "Whether there is an accelerometer in the device.")

HWCFG_BOOL(
  hw_gyroscope,
  "hw.gyroscope",
  "yes",
  "Gyroscope",
  "Whether there is a gyroscope in the device.")

HWCFG_BOOL(
  hw_audioInput,
  "hw.audioInput",
  "yes",
  "Audio recording support",
  "Whether the device can record audio")

HWCFG_BOOL(
  hw_audioOutput,
  "hw.audioOutput",
  "yes",
  "Audio playback support",
  "Whether the device can play audio")

HWCFG_BOOL(
  hw_sdCard,
  "hw.sdCard",
  "yes",
  "SD Card support",
  "Whether the device supports insertion/removal of virtual SD Cards.")

HWCFG_STRING(
  hw_sdCard_path,
  "hw.sdCard.path",
  "",
  "SD Card image path",
  "")

HWCFG_STRING(
  hw_logcatOutput_path,
  "hw.logcatOutput.path",
  "",
  "Logcat Output File Path",
  "")

HWCFG_BOOL(
  disk_cachePartition,
  "disk.cachePartition",
  "yes",
  "Cache partition support",
  "Whether we use a /cache partition on the device.")

HWCFG_STRING(
  disk_cachePartition_path,
  "disk.cachePartition.path",
  "",
  "Cache partition",
  "Cache partition to use on the device. Ignored if disk.cachePartition is not 'yes'.")

HWCFG_DISKSIZE(
  disk_cachePartition_size,
  "disk.cachePartition.size",
  "66MB",
  "Cache partition size",
  "")

HWCFG_INT(
  test_quitAfterBootTimeOut,
  "test.quitAfterBootTimeOut",
  -1,
  "Quit emulator after guest boots completely, or after time out. Default: end of universe.",
  "")

HWCFG_INT(
  test_delayAdbTillBootComplete,
  "test.delayAdbTillBootComplete",
  0,
  "Delay sending data to guest adb until guest completed booting",
  "")

HWCFG_INT(
  test_monitorAdb,
  "test.monitorAdb",
  0,
  "Monitor Adb messages between guest and host. Default: Disabled.",
  "")

HWCFG_INT(
  hw_lcd_width,
  "hw.lcd.width",
  320,
  "LCD pixel width",
  "")

HWCFG_INT(
  hw_lcd_height,
  "hw.lcd.height",
  640,
  "LCD pixel height",
  "")

HWCFG_INT(
  hw_lcd_depth,
  "hw.lcd.depth",
  16,
  "LCD color depth",
  "Color bit depth of emulated framebuffer.")

HWCFG_BOOL(
  hw_lcd_circular,
  "hw.lcd.circular",
  "false",
  "Display is circular",
  "Specifies if the main display is circular (round). Default: false.")

HWCFG_INT(
  hw_lcd_density,
  "hw.lcd.density",
  160,
  "Abstracted LCD density",
  "A value used to roughly describe the density of the LCD screen for automatic resource/asset selection.")

HWCFG_BOOL(
  hw_lcd_backlight,
  "hw.lcd.backlight",
  "yes",
  "LCD backlight",
  "Enable/Disable LCD backlight simulation,yes-enabled,no-disabled.")

HWCFG_INT(
  hw_lcd_vsync,
  "hw.lcd.vsync",
  60,
  "LCD VSYNC rate",
  "")

HWCFG_STRING(
  hw_gltransport,
  "hw.gltransport",
  "pipe",
  "Transport used to run graphics",
  "")

HWCFG_INT(
  hw_gltransport_asg_writeBufferSize,
  "hw.gltransport.asg.writeBufferSize",
  1048576,
  "For address space graphics, the total size of the write buffer the guest can write into",
  "")

HWCFG_INT(
  hw_gltransport_asg_writeStepSize,
  "hw.gltransport.asg.writeStepSize",
  4096,
  "For address space graphics, the max size of each guest-to-host transaction.",
  "")

HWCFG_INT(
  hw_gltransport_asg_dataRingSize,
  "hw.gltransport.asg.dataRingSize",
  32768,
  "For address space graphics, the size of the ring used to transfer larger buffers.",
  "")

HWCFG_INT(
  hw_gltransport_drawFlushInterval,
  "hw.gltransport.drawFlushInterval",
  800,
  "Interval over which to flush draw calls (balance host gpu starve vs pipe notif overhead)",
  "")

HWCFG_INT(
  hw_displayRegion_0_1_xOffset,
  "hw.displayRegion.0.1.xOffset",
  -1,
  "Horizontal offset of the sub-region",
  "")

HWCFG_INT(
  hw_displayRegion_0_1_yOffset,
  "hw.displayRegion.0.1.yOffset",
  -1,
  "Vertical offset of the sub-region",
  "")

HWCFG_INT(
  hw_displayRegion_0_1_width,
  "hw.displayRegion.0.1.width",
  0,
  "Horizontal size of the sub-region",
  "")

HWCFG_INT(
  hw_displayRegion_0_1_height,
  "hw.displayRegion.0.1.height",
  0,
  "Vertical size of the sub-region",
  "")

HWCFG_INT(
  hw_displayRegion_0_2_xOffset,
  "hw.displayRegion.0.2.xOffset",
  -1,
  "Horizontal offset of the sub-region",
  "")

HWCFG_INT(
  hw_displayRegion_0_2_yOffset,
  "hw.displayRegion.0.2.yOffset",
  -1,
  "Vertical offset of the sub-region",
  "")

HWCFG_INT(
  hw_displayRegion_0_2_width,
  "hw.displayRegion.0.2.width",
  0,
  "Horizontal size of the sub-region",
  "")

HWCFG_INT(
  hw_displayRegion_0_2_height,
  "hw.displayRegion.0.2.height",
  0,
  "Vertical size of the sub-region",
  "")

HWCFG_INT(
  hw_displayRegion_0_3_xOffset,
  "hw.displayRegion.0.3.xOffset",
  -1,
  "Horizontal offset of the sub-region",
  "")

HWCFG_INT(
  hw_displayRegion_0_3_yOffset,
  "hw.displayRegion.0.3.yOffset",
  -1,
  "Vertical offset of the sub-region",
  "")

HWCFG_INT(
  hw_displayRegion_0_3_width,
  "hw.displayRegion.0.3.width",
  0,
  "Horizontal size of the sub-region",
  "")

HWCFG_INT(
  hw_displayRegion_0_3_height,
  "hw.displayRegion.0.3.height",
  0,
  "Vertical size of the sub-region",
  "")

HWCFG_INT(
  hw_display1_width,
  "hw.display1.width",
  0,
  "Pixel width of the second display",
  "")

HWCFG_INT(
  hw_display1_height,
  "hw.display1.height",
  0,
  "Pixel height of the second display",
  "")

HWCFG_INT(
  hw_display1_density,
  "hw.display1.density",
  0,
  "Screen density of the second display",
  "")

HWCFG_INT(
  hw_display1_xOffset,
  "hw.display1.xOffset",
  -1,
  "the horizontal offset of the second display with respect to the host QT window.",
  "")

HWCFG_INT(
  hw_display1_yOffset,
  "hw.display1.yOffset",
  -1,
  "the veritcal offset of the second display with respect to the host QT window.",
  "")

HWCFG_INT(
  hw_display1_flag,
  "hw.display1.flag",
  0,
  "the flag to use when the second display is initialized in the Android system.",
  "")

HWCFG_INT(
  hw_display2_width,
  "hw.display2.width",
  0,
  "Pixel width of the third display",
  "")

HWCFG_INT(
  hw_display2_height,
  "hw.display2.height",
  0,
  "Pixel height of the third display",
  "")

HWCFG_INT(
  hw_display2_density,
  "hw.display2.density",
  0,
  "Screen density of the third display",
  "")

HWCFG_INT(
  hw_display2_xOffset,
  "hw.display2.xOffset",
  -1,
  "the horizontal offset of the third display with respect to the host QT window.",
  "")

HWCFG_INT(
  hw_display2_yOffset,
  "hw.display2.yOffset",
  -1,
  "the veritcal offset of the third display with respect to the host QT window.",
  "")

HWCFG_INT(
  hw_display2_flag,
  "hw.display2.flag",
  0,
  "the flag to use when the third display is initialized in the Android system.",
  "")

HWCFG_INT(
  hw_display3_width,
  "hw.display3.width",
  0,
  "Pixel width of the fourth display",
  "")

HWCFG_INT(
  hw_display3_height,
  "hw.display3.height",
  0,
  "Pixel height of the fourth display",
  "")

HWCFG_INT(
  hw_display3_density,
  "hw.display3.density",
  0,
  "Screen density of the fourth display",
  "")

HWCFG_INT(
  hw_display3_xOffset,
  "hw.display3.xOffset",
  -1,
  "the horizontal offset of the fourth display with respect to the host QT window.",
  "")

HWCFG_INT(
  hw_display3_yOffset,
  "hw.display3.yOffset",
  -1,
  "the veritcal offset of the fourth display with respect to the host QT window.",
  "")

HWCFG_INT(
  hw_display3_flag,
  "hw.display3.flag",
  0,
  "the flag touse when the fourth display is initialized in the Android system.",
  "")

HWCFG_BOOL(
  hw_multi_display_window,
  "hw.multi_display_window",
  "no",
  "Create a window for each display",
  "When multidisplay enabled, enabling this flag will create a window for each display.")

HWCFG_STRING(
  display_settings_xml,
  "display.settings.xml",
  "",
  "Configure setting xml file for Android Window Manager",
  "")

HWCFG_BOOL(
  hw_gpu_enabled,
  "hw.gpu.enabled",
  "no",
  "GPU emulation",
  "Enable/Disable emulated OpenGLES GPU")

HWCFG_STRING(
  hw_gpu_mode,
  "hw.gpu.mode",
  "auto",
  "GPU emulation mode",
  "This value determines how GPU emulation is implemented.")

HWCFG_STRING(
  hw_initialOrientation,
  "hw.initialOrientation",
  "portrait",
  "Initial screen orientation",
  "Setup initial screen orientation, can be rotated later on.")

HWCFG_STRING(
  hw_camera_back,
  "hw.camera.back",
  "emulated",
  "Configures camera facing back",
  "Must be 'emulated' for a fake camera, 'webcam<N>' for a web camera, or 'none' if back camera is disabled.")

HWCFG_STRING(
  hw_camera_front,
  "hw.camera.front",
  "none",
  "Configures camera facing front",
  "Must be 'emulated' for a fake camera, 'webcam<N>' for a web camera, or 'none' if front camera is disabled.")

HWCFG_INT(
  vm_heapSize,
  "vm.heapSize",
  0,
  "Max VM application heap size",
  "The maximum heap size a Dalvik application might allocate before being killed by the system. Value is in megabytes.")

HWCFG_BOOL(
  hw_sensors_light,
  "hw.sensors.light",
  "yes",
  "Light support",
  "Whether there is a light sensor in the device")

HWCFG_BOOL(
  hw_sensors_pressure,
  "hw.sensors.pressure",
  "yes",
  "Pressure support",
  "Whether there is a pressure sensor in the device")

HWCFG_BOOL(
  hw_sensors_humidity,
  "hw.sensors.humidity",
  "yes",
  "Humidity support",
  "Whether there is a relative humidity sensor in the device")

HWCFG_BOOL(
  hw_sensors_proximity,
  "hw.sensors.proximity",
  "yes",
  "Proximity support",
  "Whether there is an proximity in the device.")

HWCFG_BOOL(
  hw_sensors_magnetic_field,
  "hw.sensors.magnetic_field",
  "yes",
  "Magnetic field support",
  "Provides magnetic field sensor values.")

HWCFG_BOOL(
  hw_sensors_magnetic_field_uncalibrated,
  "hw.sensors.magnetic_field_uncalibrated",
  "yes",
  "Uncalibrated magnetic field suport",
  "Provides uncalibrated magnetic field sensor values.")

HWCFG_BOOL(
  hw_sensors_gyroscope_uncalibrated,
  "hw.sensors.gyroscope_uncalibrated",
  "yes",
  "Uncalibrated gyroscope support",
  "Provides uncalibrated gyroscope sensor values.")

HWCFG_BOOL(
  hw_sensors_orientation,
  "hw.sensors.orientation",
  "yes",
  "Orientation support",
  "Provides orientation sensor values.")

HWCFG_BOOL(
  hw_sensors_temperature,
  "hw.sensors.temperature",
  "yes",
  "Temperature support",
  "Provides temperature sensor values.")

HWCFG_BOOL(
  hw_sensors_rgbclight,
  "hw.sensors.rgbclight",
  "no",
  "RGBC light sensor support",
  "Provides RGBC light sensor values.")

HWCFG_BOOL(
  hw_sensor_hinge,
  "hw.sensor.hinge",
  "no",
  "Enalbe hinge angle sensor.",
  "")

HWCFG_INT(
  hw_sensor_hinge_count,
  "hw.sensor.hinge.count",
  0,
  "Provides hinge angle sensor count.",
  "")

HWCFG_INT(
  hw_sensor_hinge_type,
  "hw.sensor.hinge.type",
  0,
  "Provides hinge angle sensor type. 0 (horizontal) and 1 (vertical)",
  "")

HWCFG_INT(
  hw_sensor_hinge_sub_type,
  "hw.sensor.hinge.sub_type",
  0,
  "Provides hinge angle sensor sub type. 0 (invisible hinge, fold on screen) and 1 (hinge)",
  "")

HWCFG_STRING(
  hw_sensor_hinge_ranges,
  "hw.sensor.hinge.ranges",
  "",
  "angel ranges for each hinge sensor, e.g., 0-360, 0-180 for two sensors.",
  "")

HWCFG_STRING(
  hw_sensor_hinge_defaults,
  "hw.sensor.hinge.defaults",
  "",
  "default angel for each hinge sensor, e.g., 180, 90 for two sensors.",
  "")

HWCFG_STRING(
  hw_sensor_hinge_areas,
  "hw.sensor.hinge.areas",
  "",
  "hinge areas on the display, format is percentage_of_screen-width, e.g., 33.3-0, 66.6-10 for two sensors. Or x-y-width-height, e.g., 600-0-0-1200, 1200-0-10-1200 for two sensors.",
  "")

HWCFG_STRING(
  hw_sensor_posture_list,
  "hw.sensor.posture_list",
  "",
  "list of supported postures by index. 0: unknown, 1: closed, 2: half-open, 3: open, 4: flipped, 5: tent",
  "")

HWCFG_STRING(
  hw_sensor_hinge_angles_posture_definitions,
  "hw.sensor.hinge_angles_posture_definitions",
  "",
  "angles ranges for each posture in posture_list.",
  "start-end angle pairs which define each posture. optionally, default angle may be specified for each posture, by providing a third value. default posture angle is used e.g. in quick-jump-to-posture buttons in UI.")

HWCFG_INT(
  hw_sensor_hinge_fold_to_displayRegion_0_1_at_posture,
  "hw.sensor.hinge.fold_to_displayRegion.0.1_at_posture",
  1,
  "set folded status at a certain posture, e.g, fold-out device, posture flipped",
  "")

HWCFG_BOOL(
  hw_sensor_roll,
  "hw.sensor.roll",
  "no",
  "Enalbe rollable sensor.",
  "")

HWCFG_INT(
  hw_sensor_roll_count,
  "hw.sensor.roll.count",
  0,
  "rollable sensor count.",
  "")

HWCFG_STRING(
  hw_sensor_roll_radius,
  "hw.sensor.roll.radius",
  "",
  "roll radious of display width or height.",
  "")

HWCFG_STRING(
  hw_sensor_roll_ranges,
  "hw.sensor.roll.ranges",
  "",
  "the pecentage of display width or height which is rollable.",
  "")

HWCFG_STRING(
  hw_sensor_roll_direction,
  "hw.sensor.roll.direction",
  "",
  "rolling direction starting from open posture. 0: left-to-right or top-to-buttom, 1: right-to-left or bottom-to-top",
  "")

HWCFG_STRING(
  hw_sensor_roll_defaults,
  "hw.sensor.roll.defaults",
  "",
  "defaults percentage of display width or height which is rolled.",
  "")

HWCFG_STRING(
  hw_sensor_roll_percentages_posture_definitions,
  "hw.sensor.roll_percentages_posture_definitions",
  "",
  "angles ranges for each posture in posture_list.",
  "")

HWCFG_INT(
  hw_sensor_roll_resize_to_displayRegion_0_1_at_posture,
  "hw.sensor.roll.resize_to_displayRegion.0.1_at_posture",
  6,
  "resize default display to display region 0.1 when rolling to a posture state",
  "")

HWCFG_INT(
  hw_sensor_roll_resize_to_displayRegion_0_2_at_posture,
  "hw.sensor.roll.resize_to_displayRegion.0.2_at_posture",
  6,
  "resize default display to display region 0.2 when rolling to a posture state",
  "")

HWCFG_INT(
  hw_sensor_roll_resize_to_displayRegion_0_3_at_posture,
  "hw.sensor.roll.resize_to_displayRegion.0.3_at_posture",
  6,
  "resize default display to display region 0.3 when rolling to a posture state",
  "")

HWCFG_BOOL(
  hw_sensors_heart_rate,
  "hw.sensors.heart_rate",
  "no",
  "Heart rate support",
  "Whether there is a heart rate sensor in the device")

HWCFG_BOOL(
  hw_sensors_wrist_tilt,
  "hw.sensors.wrist_tilt",
  "no",
  "Wrist tilt gesture",
  "Whether there is a wrist tilt gesture sensor in the device")

HWCFG_BOOL(
  hw_useext4,
  "hw.useext4",
  "yes",
  "Deprecated option. Ignored.",
  "Used to specify the Ext4 partition image type. This is now autodetected.")

HWCFG_BOOL(
  hw_arc,
  "hw.arc",
  "no",
  "Chrome OS device (App Runtime for Chrome)",
  "The emulated device is a Chrome OS machine.")

HWCFG_BOOL(
  hw_arc_autologin,
  "hw.arc.autologin",
  "no",
  "Auto login for Chrome OS devices",
  "Used to enable auto login into Chrome OS devices")

HWCFG_STRING(
  hw_featureflags,
  "hw.featureflags",
  "",
  "Feature flags",
  "A comma-separated list of feature flags to enable or disable, such as 'Enabled,-Disabled'.")

HWCFG_STRING(
  hw_device_name,
  "hw.device.name",
  "",
  "Name of the device, e.g., pixel, resizable...# Kernel image.",
  "")

HWCFG_STRING(
  hw_resizable_configs,
  "hw.resizable.configs",
  "",
  "",
  "A comma-separated list of resizable resolutions. Each entry is organized as name-id-width-height-dpi, where the id number matches enum in android/android-emu/android/resizable_display_config.h")

HWCFG_STRING(
  kernel_path,
  "kernel.path",
  "",
  "Path to the kernel image",
  "Path to the kernel image.")

HWCFG_STRING(
  kernel_parameters,
  "kernel.parameters",
  "",
  "kernel boot parameters string.",
  "")

HWCFG_STRING(
  kernel_newDeviceNaming,
  "kernel.newDeviceNaming",
  "autodetect",
  "Does the kernel require a new device naming scheme?",
  "Used to specify whether the kernel requires a new device naming scheme. Typically for Linux 3.10 and above.")

HWCFG_STRING(
  kernel_supportsYaffs2,
  "kernel.supportsYaffs2",
  "autodetect",
  "Does the kernel supports YAFFS2 partitions?",
  "Used to specify whether the kernel supports YAFFS2 partition images. Typically before 3.10 only.")

HWCFG_STRING(
  disk_ramdisk_path,
  "disk.ramdisk.path",
  "",
  "Path to the ramdisk image",
  "Path to the ramdisk image.")

HWCFG_STRING(
  disk_systemPartition_path,
  "disk.systemPartition.path",
  "",
  "Path to runtime system partition image",
  "")

HWCFG_STRING(
  disk_systemPartition_initPath,
  "disk.systemPartition.initPath",
  "",
  "Initial system partition image",
  "")

HWCFG_DISKSIZE(
  disk_systemPartition_size,
  "disk.systemPartition.size",
  "0",
  "Ideal size of system partition",
  "")

HWCFG_STRING(
  disk_vendorPartition_path,
  "disk.vendorPartition.path",
  "",
  "Path to runtime vendor partition image",
  "")

HWCFG_STRING(
  disk_vendorPartition_initPath,
  "disk.vendorPartition.initPath",
  "",
  "Initial vendor partition image",
  "")

HWCFG_DISKSIZE(
  disk_vendorPartition_size,
  "disk.vendorPartition.size",
  "0",
  "Ideal size of vendor partition",
  "")

HWCFG_STRING(
  disk_dataPartition_path,
  "disk.dataPartition.path",
  "<temp>",
  "Path to data partition file",
  "Path to data partition file. Cannot be empty. Special value <temp> means using a temporary file. If disk.dataPartition.initPath is not empty, its content will be copied to the disk.dataPartition.path file at boot-time.")

HWCFG_STRING(
  disk_dataPartition_initPath,
  "disk.dataPartition.initPath",
  "",
  "Initial data partition",
  "If not empty, its content will be copied to the disk.dataPartition.path file at boot-time.")

HWCFG_DISKSIZE(
  disk_dataPartition_size,
  "disk.dataPartition.size",
  "0",
  "Ideal size of data partition",
  "")

HWCFG_STRING(
  disk_encryptionKeyPartition_path,
  "disk.encryptionKeyPartition.path",
  "",
  "Path to encryption key partition file",
  "Path to encryption key partition file. Should be at least 16K bytes empty disk without any filesystem on it.")

HWCFG_STRING(
  disk_snapStorage_path,
  "disk.snapStorage.path",
  "",
  "Path to snapshot storage",
  "Path to a 'snapshot storage' file, where all snapshots are stored.")

HWCFG_BOOL(
  PlayStore_enabled,
  "PlayStore.enabled",
  "no",
  "PlayStore",
  "Does the device supports Google Play?")

HWCFG_STRING(
  avd_name,
  "avd.name",
  "<build>",
  "Name of the AVD being run",
  "")

HWCFG_STRING(
  avd_id,
  "avd.id",
  "<build>",
  "ID of the AVD being run",
  "")

HWCFG_BOOL(
  fastboot_forceColdBoot,
  "fastboot.forceColdBoot",
  "no",
  "Always use cold boot",
  "If set, AVD will always use the full cold boot instead of snapshot-based quick boot process")

HWCFG_STRING(
  android_sdk_root,
  "android.sdk.root",
  "",
  "sdk root that was used during the construction of this hardware.ini",
  "This can be used by post processing tools to migrate snapshots")

HWCFG_STRING(
  android_avd_home,
  "android.avd.home",
  "",
  "avd home that was used during the construction of this hardware.ini",
  "This can be used by post processing tools to migrate snapshots")

#undef HWCFG_INT
#undef HWCFG_STRING
#undef HWCFG_BOOL
#undef HWCFG_DISKSIZE
#undef HWCFG_DOUBLE
/* end of auto-generated file */
