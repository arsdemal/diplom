struct cpuidle_driver {
	char name[CPUIDLE_NAME_LEN];
	struct list_head driver_list;
	int (*init) (struct cpuidle_device *dev);
	void (*exit) (struct cpuidle_device *dev);
	int (*redetect) (struct cpuidle_device *dev);
	int (*bm_check) (void);
	struct module *owner;
};
