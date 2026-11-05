
void FUN_02053528(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = OS_DisableInterrupts();
  uVar2 = FUN_0205396c();
  *(undefined4 *)(param_1 + 0x70) = param_6;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  FUN_020537d4(param_1);
  *(int *)(param_1 + 0x94) = param_4;
  *(int *)(param_1 + 0x90) = param_4 - param_5;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x94) + -4) = 0xfddb597d;
  **(undefined4 **)(param_1 + 0x90) = 0x7bf9dd5b;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0xa0);
  FUN_02053984(param_1,param_2,param_4 + -4);
  *(undefined4 *)(param_1 + 4) = param_3;
  *(code **)(param_1 + 0x3c) = FUN_020534fc;
  MIi_CpuClear32(0,(param_4 - param_5) + 4,param_5 + -8);
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  FUN_02052dc0(param_1);
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x80);
  MIi_CpuClear32(0,param_1 + 0xa4,0xc);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  OS_RestoreInterrupts(uVar1);
  return;
}

