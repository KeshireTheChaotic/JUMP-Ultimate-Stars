
void FUN_02034830(void)

{
  undefined4 *puVar1;
  
  if (DAT_020a0f64 == (int *)0x0) {
    if ((DAT_020a0f08 & 1) == 0) {
      jus_Class_02094824::jus_Class_02094824(&DAT_020a2a30);
      FUN_0200f2b0(&DAT_020a2a30,jus_Class_02094824::vfunc_03);
      DAT_020a0f08 = DAT_020a0f08 | 1;
    }
    DAT_020a0f64 = &DAT_020a2a30;
  }
  if (DAT_020a0c3a == '\0') {
    if ((DAT_020a0e5c & 1) == 0) {
      DAT_020a0e5c = DAT_020a0e5c | 1;
      DAT_020a0e54 = &DAT_02093cb8;
    }
    FUN_02031988(&DAT_020a0e54);
  }
  FUN_02019228();
  FUN_0202f2e0();
  FUN_02026ff8();
  FUN_02031348();
  FUN_02011b60();
  FUN_02020f7c();
  FUN_0201b854();
  FUN_020108e8();
  FUN_0201638c();
  if ((DAT_020a0e58 & 1) == 0) {
    DAT_020a0e58 = DAT_020a0e58 | 1;
    DAT_020a0ce4 = &PTR_LAB_02094424;
  }
  FUN_020355bc(&DAT_020a0ce4);
  if ((DAT_020a0ee4 & 1) == 0) {
    DAT_020a0ee4 = DAT_020a0ee4 | 1;
    DAT_020a0d38 = &PTR_vfunc_05_02094004;
  }
  FUN_02019420(&DAT_020a0d38);
  FUN_020368c8(&LAB_02034aec);
  FUN_02032a88(&LAB_02034b70);
  DAT_020a0d7c = FUN_02034c04;
  FUN_02023cd0(0x20205250);
  if (DAT_020a0f64 != (int *)0x0) {
    (**(code **)(*DAT_020a0f64 + 4))();
  }
  FUN_02015328();
  if ((DAT_020a0ea8 & 1) == 0) {
    DAT_020a0ea8 = DAT_020a0ea8 | 1;
    DAT_020a0d24 = &PTR_vfunc_14_02094338;
  }
  DAT_020a0cb0 = &DAT_020a0d24;
  (*(code *)*DAT_020a0d24)();
  (**(code **)*DAT_020a0cb0)();
  FUN_020207dc();
  FUN_02015be8(FUN_02034c54);
  if ((DAT_020a105c & 1) == 0) {
    DAT_020a105c = DAT_020a105c | 1;
    DAT_020a0c60 = &PTR_vfunc_15_02093fb4;
  }
  FUN_02030d6c(&DAT_020a0c60);
  FUN_02010500();
  FUN_0200f848();
  FUN_0200fcac();
  FUN_02010088();
  DAT_020a0fc8 = 0;
  DAT_020a0f00 = (**(code **)*DAT_020a0df4)(DAT_020a0df4,FUN_02034500);
  if ((DAT_020a0eb4 & 1) == 0) {
    jus_Class_02094d7c::jus_Class_02094d7c(&DAT_020a1e4c,0);
    DAT_020a1e4c = &jus_TagALMT::vftable;
    DAT_020a1e80 = 0;
    FUN_0200f2b0(&DAT_020a1e4c,&LAB_02034c7c,&DAT_020a129c);
    DAT_020a0eb4 = DAT_020a0eb4 | 1;
  }
  puVar1 = &DAT_020a16b0 + DAT_020a1064;
  DAT_020a1064 = DAT_020a1064 + 1;
  *puVar1 = &DAT_020a1e4c;
  FUN_0202a3fc();
  return;
}

