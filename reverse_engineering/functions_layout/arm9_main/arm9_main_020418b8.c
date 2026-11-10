
void FUN_020418b8(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_r3;
  undefined4 *local_8 [2];
  
  if ((DAT_020a0f98 & 1) == 0) {
    DAT_020a0f98 = DAT_020a0f98 | 1;
    DAT_020a0f68 = &PTR_vfunc_27_02095ce0;
  }
  DAT_020a1018 = &DAT_020a0f68;
  local_8[0] = in_r3;
  if ((DAT_020a0fb0 & 1) == 0) {
    DAT_020a0f34 = &PTR_vfunc_06_020941d8;
    FUN_0200f2b0(&DAT_020a0f34,jus_Class_020941c0::vfunc_08,&DAT_020a1488);
    DAT_020a0fb0 = DAT_020a0fb0 | 1;
  }
  puVar1 = &DAT_020a1ffc + DAT_020a0de0;
  DAT_020a0de0 = DAT_020a0de0 + 1;
  *puVar1 = &DAT_020a0f34;
  if ((DAT_020a0f54 & 1) == 0) {
    jus_Class_020941c0::jus_Class_020941c0(&DAT_020a0f30);
    FUN_0200f2b0(&DAT_020a0f30,jus_Class_020941c0::vfunc_02 + 1,&DAT_020a1494);
    DAT_020a0f54 = DAT_020a0f54 | 1;
  }
  puVar1 = &DAT_020a1ffc + DAT_020a0de0;
  DAT_020a0de0 = DAT_020a0de0 + 1;
  *puVar1 = &DAT_020a0f30;
  if ((DAT_020a0f04 & 1) == 0) {
    DAT_020a0f5c = &PTR_vfunc_06_02094148;
    FUN_0200f2b0(&DAT_020a0f5c,jus_Class_02094130::vfunc_08,&DAT_020a14a0);
    DAT_020a0f04 = DAT_020a0f04 | 1;
  }
  puVar1 = &DAT_020a1ffc + DAT_020a0de0;
  DAT_020a0de0 = DAT_020a0de0 + 1;
  *puVar1 = &DAT_020a0f5c;
  if ((DAT_020a0ea4 & 1) == 0) {
    DAT_020a0ea4 = DAT_020a0ea4 | 1;
    DAT_020a0f88 = &PTR_vfunc_10_02093fa0;
  }
  puVar1 = &DAT_020a1b84 + DAT_020a0d5c;
  DAT_020a0d5c = DAT_020a0d5c + 1;
  *puVar1 = &DAT_020a0f88;
  if ((DAT_020a0d70 & 1) == 0) {
    DAT_020a0d70 = DAT_020a0d70 | 1;
    DAT_020a0f1c = &PTR_vfunc_18_02094514;
  }
  FUN_020355bc(&DAT_020a0f1c);
  if ((DAT_020a0ef4 & 1) == 0) {
    jus_Class_020942c8::jus_Class_020942c8(&DAT_020a0eec);
    FUN_0200f2b0(&DAT_020a0eec,jus_Class_020942c8::vfunc_03,&DAT_020a14ac);
    DAT_020a0ef4 = DAT_020a0ef4 | 1;
  }
  puVar1 = &DAT_020a19e4 + DAT_020a0cfc;
  DAT_020a0cfc = DAT_020a0cfc + 1;
  *puVar1 = &DAT_020a0eec;
  FUN_02032a88(FUN_02041d78 + 1);
  DAT_020a0d7c = FUN_02041d9c;
  FUN_02023cd0(0x20205250);
  if ((DAT_020a0ee8 & 1) == 0) {
    DAT_020a0ef0 = &PTR_vfunc_09_020944f0;
    FUN_0200f2b0(&DAT_020a0ef0,jus_HwTexPltt_Part_020944cc::vfunc_14);
    DAT_020a0ee8 = DAT_020a0ee8 | 1;
  }
  FUN_020289f0(&DAT_020a0ef0);
  if ((DAT_020a0f48 & 1) == 0) {
    DAT_020a0f48 = DAT_020a0f48 | 1;
    DAT_020a0f44 = &PTR_FUN_02094070;
  }
  DAT_020a0fac = &DAT_020a0f44;
  (*(code *)*DAT_020a0f44)();
  if ((DAT_020a0ec4 & 1) == 0) {
    DAT_020a0ec4 = DAT_020a0ec4 | 1;
    DAT_020a0f58 = &PTR_vfunc_12_020940b8;
  }
  DAT_020a1034 = 0;
  DAT_020a1044 = &DAT_020a0f58;
  (*(code *)DAT_020a0f58[2])();
  if ((DAT_020a0ec8 & 1) == 0) {
    DAT_020a0ec8 = DAT_020a0ec8 | 1;
    DAT_020a0d8c = &PTR_vfunc_15_02093fb4;
  }
  FUN_02030d6c(&DAT_020a0d8c);
  if ((DAT_020a0e8c & 1) == 0) {
    jus_Class_02094058::jus_Class_02094058(&DAT_020a0f78);
    FUN_0200f2b0(&DAT_020a0f78,jus_Class_02094058::vfunc_02);
    DAT_020a0e8c = DAT_020a0e8c | 1;
  }
  DAT_020a0dc4 = &DAT_020a0f78;
  FUN_02048b48();
  if ((DAT_020a0d9c & 1) == 0) {
    DAT_020a0d9c = DAT_020a0d9c | 1;
    DAT_020a0f3c = &DAT_02093ce4;
  }
  DAT_020a0cf0 = &DAT_020a0f3c;
  iVar2 = FUN_0201a228(0x58);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = jus_Class_02099cf8::jus_Class_02099cf8();
  }
  if ((DAT_020a0f84 & 1) == 0) {
    DAT_020a0f84 = DAT_020a0f84 | 1;
    DAT_020a0e3c = &PTR_vfunc_05_02093f8c;
  }
  DAT_02093c00 = 1;
  DAT_020a0ffc = &DAT_020a0e3c;
  DAT_020a0cb8 = uVar3;
  (*(code *)DAT_020a0e3c[2])();
  DAT_020a10a8 = 0;
  if ((DAT_020a0edc & 1) == 0) {
    DAT_020a0fa4 = &PTR_vfunc_20_02094040;
    FUN_0200f2b0(&DAT_020a0fa4,jus_Class_02093ff0::vfunc_22,&DAT_020a14d0);
    DAT_020a0edc = DAT_020a0edc | 1;
  }
  local_8[0] = &DAT_020a0fa4;
  FUN_02030110(&DAT_020a1284,local_8);
  OS_SetIrqFunction(4,FUN_01ff8af0);
  OS_SetIrqFunction(1,FUN_02042988);
  return;
}

