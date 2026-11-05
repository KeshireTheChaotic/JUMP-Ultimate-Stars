
void FUN_037fc66c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = OS_DisableInterrupts();
  uVar2 = FUN_037fca70();
  *(undefined4 *)(param_1 + 0x54) = param_6;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_037fc8cc(param_1);
  *(int *)(param_1 + 0x78) = param_4;
  *(int *)(param_1 + 0x74) = param_4 - param_5;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x78) + -4) = 0xd73bfdf7;
  **(undefined4 **)(param_1 + 0x74) = 0xfbdd37bb;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x84);
  FUN_037fca88(param_1,param_2,param_4 + -4);
  *(undefined4 *)(param_1 + 4) = param_3;
  *(code **)(param_1 + 0x3c) = FUN_037fc640;
  MIi_CpuClear32(0,(param_4 - param_5) + 4,param_5 + -8);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_037fc100(param_1);
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 100);
  MIi_CpuClear32(0,param_1 + 0x88,0xc);
  *(undefined4 *)(param_1 + 0x94) = 0;
  OS_RestoreInterrupts(uVar1);
  return;
}

