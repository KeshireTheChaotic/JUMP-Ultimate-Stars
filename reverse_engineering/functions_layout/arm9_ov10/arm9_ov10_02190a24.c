
void FUN_02190a24(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,uint param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = param_2 + 0x14 + param_4 & 0xffff;
  *(ushort *)(param_1 + -0x12) = (ushort)(uVar1 >> 8) | (ushort)(uVar1 << 8);
  *(ushort *)(param_1 + -0xe) =
       (ushort)((param_6 & 0xffff) >> 8) | (ushort)((param_6 & 0xffff) << 8);
  *(undefined2 *)(param_1 + -10) = 0;
  iVar2 = FUN_02191208(param_1 + -0x14,0x14);
  *(ushort *)(param_1 + -10) = (ushort)((uint)iVar2 >> 8) | (ushort)(iVar2 << 8);
  if ((param_5 != 0x7f000001) && (param_5 != DAT_021a8538)) {
    FUN_02190b00(param_1 + -0x14,param_2 + 0x14,param_3,param_4,param_5,0x800);
  }
  if (((param_5 == 0x7f000001) || (param_5 == DAT_021a8538)) ||
     (iVar2 = FUN_02191114(param_5), iVar2 != 0)) {
    FUN_02051890(&DAT_021a6eb0,param_1 + -0x1c,8);
    uVar3 = OS_DisableInterrupts();
    FUN_02190efc(&DAT_021a8548,&DAT_021a8548,param_1 + -0x1c,param_2 + 0x1c,param_3,param_4);
    OS_RestoreInterrupts(uVar3);
  }
  return;
}

