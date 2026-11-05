
void FUN_02089390(undefined4 param_1,undefined2 param_2,undefined4 param_3,int param_4,
                 undefined2 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  
                    /* JUS-TAG strings=["CommLib.cpp"] */
  puVar1 = (undefined4 *)FUN_0201a2fc();
  FUN_0201aeec(*puVar1,1);
  DAT_0214bea0 = param_4;
  if (DAT_0214bea4 != 1 && DAT_0214bea4 != 2) {
    FUN_02089264(0);
  }
  DAT_0214be64 = param_3;
  if (DAT_0214bea4 == 1) {
    DAT_0214bea4 = 4;
    FUN_02059560(&LAB_02088958_1);
    FUN_02088eac(4,0x78);
  }
  DAT_0214bf00 = param_1;
  DAT_0214bf04 = param_2;
  if (DAT_0214be50 == 0) {
    DAT_0214be50 = FUN_02089b54();
  }
  DAT_0214be5c = 0x1c0;
  DAT_0214be94 = 0x80;
  DAT_0214be60 = 2;
  DAT_0214bea4 = 4;
  DAT_0214bf0c = DAT_0214be4e & 0x3fff | (ushort)(DAT_0214bea0 << 0xe);
  DAT_0214bf32 = DAT_0214be50;
  DAT_0214be4e = DAT_0214be4e + 1;
  DAT_0214bf18 = FUN_02058750();
  DAT_0214bf34 = 0x74;
  DAT_0214bf36 = 0xe;
  DAT_0214bf10 = param_5;
  DAT_0214bf16 = 0;
  DAT_0214bf12 = 0;
  DAT_0214bf0e = 1;
  DAT_0214bf14 = 0;
  FUN_02058b94(0xe,0x20889b1);
  iVar2 = FUN_02059320(&LAB_02088958_1,&DAT_0214bf00);
  if (iVar2 != 2) {
    FUN_02088904(iVar2,s_CommLib_cpp_020a0338,0x496);
  }
  FUN_02088eac(4,0x78);
  iVar2 = FUN_02059250(&LAB_02088cc4_1);
  if (iVar2 != 2) {
    FUN_02088904(iVar2,s_CommLib_cpp_020a0338,0x4a2);
  }
  FUN_02088eac(4,0x78);
  DAT_0214be44 = 0;
  DAT_0214be4a = 1;
  return;
}

