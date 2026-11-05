
undefined4 FUN_02188e18(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0217583c(0x144);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
    return 1;
  }
  FUN_02002488(puVar1,0,0x144);
  *puVar1 = param_3;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[3] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[7] = 0x1000;
  uVar2 = FUN_0217583c(puVar1[7] + 1);
  puVar1[6] = uVar2;
  if (puVar1[6] == 0) {
    FUN_0218912c(param_1,s_Out_of_memory__021a5f98);
    return 1;
  }
  puVar1[0x4f] = 0;
  puVar1[0x50] = 0;
  *param_2 = (int)puVar1;
  return 0;
}

