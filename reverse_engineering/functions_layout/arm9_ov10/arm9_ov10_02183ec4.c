
undefined4
FUN_02183ec4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *param_1;
  puVar1 = (undefined4 *)FUN_0217583c(0x18);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_0218912c(param_1,s_Out_of_memory__021a541c);
    return 1;
  }
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = param_4;
  if (param_5 == 0) {
    puVar1[4] = 0;
  }
  else {
    puVar1[4] = *(undefined4 *)(param_5 + 0x18);
  }
  puVar1[3] = param_6;
  puVar1[5] = 0;
  if (*(int *)(iVar2 + 0x438) == 0) {
    *(int *)(iVar2 + 0x438) = (int)puVar1;
  }
  if (*(int *)(iVar2 + 0x43c) != 0) {
    *(undefined4 **)(*(int *)(iVar2 + 0x43c) + 0x14) = puVar1;
  }
  *(undefined4 **)(iVar2 + 0x43c) = puVar1;
  return 0;
}

