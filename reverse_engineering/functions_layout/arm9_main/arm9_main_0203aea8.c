
void FUN_0203aea8(void)

{
  uint uVar1;
  
  FUN_02031988(0);
  if ((DAT_020a0d64 & 1) == 0) {
    jus_Class_020972e0::jus_Class_020972e0(&DAT_020a374c);
    FUN_0200f2b0(&DAT_020a374c,&LAB_0203b368,&DAT_020a1338);
    DAT_020a0d64 = DAT_020a0d64 | 1;
  }
  if ((DAT_020a0d68 & 1) == 0) {
    jus_Class_02097244::jus_Class_02097244(&DAT_020a4054);
    FUN_0200f2b0(&DAT_020a4054,FUN_0203b37c,&DAT_020a1344);
    DAT_020a0d68 = DAT_020a0d68 | 1;
  }
  if ((DAT_020a0d54 & 1) == 0) {
    jus_Class_02097124::jus_Class_02097124(&DAT_020a3288);
    FUN_0200f2b0(&DAT_020a3288,FUN_0203b390,&DAT_020a1350);
    DAT_020a0d54 = DAT_020a0d54 | 1;
  }
  if ((DAT_020a1040 & 1) == 0) {
    jus_Class_0209ab18::jus_Class_0209ab18(&DAT_020a495c,0);
    FUN_0200f2b0(&DAT_020a495c,FUN_0203b3bc,&DAT_020a135c);
    jus_Class_0209ab18::jus_Class_0209ab18(&DAT_020a5380,1);
    FUN_0200f2b0(&DAT_020a5380,FUN_0203b3bc,&DAT_020a1368);
    jus_Class_0209ab18::jus_Class_0209ab18(&DAT_020a5da4,2);
    FUN_0200f2b0(&DAT_020a5da4,FUN_0203b3bc,&DAT_020a1374);
    jus_Class_0209ab18::jus_Class_0209ab18(&DAT_020a67c8,3);
    FUN_0200f2b0(&DAT_020a67c8,FUN_0203b3bc,&DAT_020a1380);
    DAT_020a1040 = DAT_020a1040 | 1;
  }
  if ((DAT_020a109c & 1) == 0) {
    jus_Class_0209aa68::jus_Class_0209aa68(&DAT_020a71ec,0);
    FUN_0200f2b0(&DAT_020a71ec,FUN_0203b3d0,&DAT_020a138c);
    jus_Class_0209aa68::jus_Class_0209aa68(&DAT_020a7c10,1);
    FUN_0200f2b0(&DAT_020a7c10,FUN_0203b3d0,&DAT_020a1398);
    jus_Class_0209aa68::jus_Class_0209aa68(&DAT_020a8634,2);
    FUN_0200f2b0(&DAT_020a8634,FUN_0203b3d0,&DAT_020a13a4);
    jus_Class_0209aa68::jus_Class_0209aa68(&DAT_020a9058,3);
    FUN_0200f2b0(&DAT_020a9058,FUN_0203b3d0,&DAT_020a13b0);
    DAT_020a109c = DAT_020a109c | 1;
  }
  DAT_020a0f2c = &DAT_020a374c;
  DAT_020a0e08 = &DAT_020a4054;
  DAT_020a0f20 = &DAT_020a3288;
  DAT_020a4044 = DAT_020a1008;
  DAT_020a404e = 1;
  DAT_020a494c = DAT_020a0cd4;
  DAT_020a4956 = 1;
  uVar1 = 0;
  do {
    (&DAT_020a1700)[uVar1] = &DAT_020a495c + uVar1 * 0xa24;
    (&DAT_020a1710)[uVar1] = &DAT_020a71ec + uVar1 * 0xa24;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  FUN_0203d0b4(&DAT_020a495c,0);
  FUN_0203d0b4(&DAT_020a5380,1);
  FUN_0203d478(&DAT_020a5380,4);
  FUN_0203cfbc(&DAT_020a5380,0x20,0x20);
  DAT_020a5cdc = 0x4000;
  DAT_020a0ff0 = 2;
  FUN_0203d0b4(&DAT_020a5da4);
  FUN_0203d478(&DAT_020a5da4,8);
  FUN_0203cfbc(&DAT_020a5da4,0x80,0x80);
  DAT_020a6700 = 0x4000;
  DAT_020a0ff0 = 2;
  FUN_0203d0b4(&DAT_020a67c8,3);
  FUN_0203d478(&DAT_020a67c8,8);
  FUN_0203cfbc(&DAT_020a67c8,0x40,0x40);
  DAT_020a7124 = 0x10000;
  DAT_020a0ff0 = 2;
  FUN_0203d0b4(&DAT_020a71ec,1);
  FUN_0203d478(&DAT_020a71ec,4);
  FUN_0203cfbc(&DAT_020a71ec,0x20,0x20);
  DAT_020a7b48 = 0x8000;
  DAT_020a0ebc = 2;
  FUN_0203d0b4(&DAT_020a7c10,1);
  FUN_0203d478(&DAT_020a7c10,8);
  FUN_0203cfbc(&DAT_020a7c10,0x20,0x20);
  DAT_020a856c = 0x4000;
  DAT_020a0ebc = 2;
  FUN_0203d0b4(&DAT_020a8634,1);
  FUN_0203d478(&DAT_020a8634,8);
  FUN_0203cfbc(&DAT_020a8634,0x20,0x20);
  DAT_020a8f90 = 0x4000;
  DAT_020a0ebc = 2;
  FUN_0203d0b4(&DAT_020a9058,1);
  FUN_0203d478(&DAT_020a9058,8);
  FUN_0203cfbc(&DAT_020a9058,0x20,0x20);
  DAT_020a99b4 = 0x4000;
  DAT_020a0ebc = 2;
  DAT_020a0dd0 = DAT_020a0f20;
  return;
}

