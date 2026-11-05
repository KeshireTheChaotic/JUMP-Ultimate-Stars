
void FUN_0215eb08(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  undefined4 uVar1;
  
  uVar1 = OS_EnableInterrupts();
  FUN_020584c8();
  OS_RestoreInterrupts(uVar1);
  DAT_0216ad84 = param_1;
  MIi_CpuClear32(0,param_1,0x5640);
  *(undefined2 *)(param_1 + 0x50e4) = 0;
  *(undefined4 *)(param_1 + 0x50ec) = 1;
  *(undefined4 *)(param_1 + 0x50f8) = param_3;
  *(undefined2 *)(param_1 + 0x50e0) = param_4;
  *(undefined2 *)(param_1 + 0x50e8) = 0x220;
  *(undefined2 *)(param_1 + 0x50ea) = 0x3dc0;
  *(undefined4 *)(param_1 + 0x50f0) = 0;
  *(undefined4 *)(param_1 + 0x50fc) = param_2;
  *(undefined2 *)(*(int *)(param_1 + 0x50fc) + 0xe) = 1;
  *(undefined2 *)(*(int *)(param_1 + 0x50fc) + 0x18) = 0x5a;
  *(undefined2 *)(*(int *)(param_1 + 0x50fc) + 0x32) = 1;
  return;
}

