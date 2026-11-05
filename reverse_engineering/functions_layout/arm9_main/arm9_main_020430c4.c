
void FUN_020430c4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
                    /* JUS-TAG strings=["RomFSTable"] */
  FUN_02050dcc();
  FUN_02064f50();
  FUN_02042d14();
  FUN_02053630();
  FUN_02051d5c(0x40000);
  FUN_02043090();
  FUN_02054c8c();
  FUN_020550c0();
  FUN_02054c7c();
  FUN_0206475c(0xffffffff);
  uVar1 = FUN_0206477c(0,0);
  uVar2 = FUN_0201a228();
  FUN_0201ac08(uVar2,s_RomFSTable_0209da5c);
  FUN_0206477c(uVar2,uVar1);
  FUN_020430a8(1);
  FUN_02060efc();
  FUN_02056298();
  FUN_02061428();
  if ((DAT_020a0da4 & 1) == 0) {
    jus_Class_020948a4::jus_Class_020948a4(&DAT_020a2e54);
    FUN_0200f2b0(&DAT_020a2e54,jus_Class_020948a4::vfunc_03);
    DAT_020a0da4 = DAT_020a0da4 | 1;
  }
  DAT_020a0f64 = &DAT_020a2e54;
  FUN_0203aea8();
  if ((DAT_020a0f28 & 1) == 0) {
    DAT_020a0f28 = DAT_020a0f28 | 1;
    DAT_020a0dac = &DAT_020943e4;
  }
  FUN_02014498(&DAT_020a0dac);
  if ((DAT_020a0fbc & 1) == 0) {
    DAT_020a0fbc = DAT_020a0fbc | 1;
    DAT_020a0fe8 = &DAT_02093f64;
  }
  DAT_020a0df4 = &DAT_020a0fe8;
  (**(code **)(DAT_020a0fe8 + 4))();
  DAT_020a0e18 = FUN_02034c94;
  DAT_020a1060 = FUN_02049188;
  FUN_02034830();
  FUN_020368c8(FUN_0204323c);
  DAT_02093bcc = 0x10000;
  return;
}

