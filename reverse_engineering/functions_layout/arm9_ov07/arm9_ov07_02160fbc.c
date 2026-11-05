
undefined4
FUN_02160fbc(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1[8] + 0xc) + 0x24);
  FUN_02161870(puVar2);
  *param_1 = param_2;
  param_1[1] = param_3 & 0xffff;
  uVar1 = FUN_02051098(param_2,param_3);
  *(undefined2 *)(param_1 + 3) = uVar1;
  param_1[4] = param_4;
  param_1[6] = param_5 & 0xffff;
  MIi_CpuClear32(0,puVar2 + 0x10b,0x158);
  puVar2[0x109] = (uint)(param_5 != (param_5 / 0x1fc) * 0x1fc) + param_5 / 0x1fc;
  puVar2[0x108] = param_3;
  puVar2[0x10a] = param_2;
  *puVar2 = param_4;
  return 1;
}

