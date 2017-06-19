struct cpuidle_governor {
	char			name[CPUIDLE_NAME_LEN];
	unsigned int		rating;

	int  (*enable)		(struct cpuidle_device *dev);
	void (*disable)		(struct cpuidle_device *dev);
	int  (*select)		(struct cpuidle_device *dev);
	void (*reflect)		(struct cpuidle_device *dev);

	struct module 		*owner;
	/* ... */
    };
