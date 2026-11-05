
bool FUN_021592ec(int param_1,int param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_3 * 0x4dc + param_2 + 0x20;
  uVar2 = (uint)*(byte *)(param_1 + 4);
  FUN_02159db4(iVar1 + 0x48c + uVar2 * 2,iVar1 + 0x494 + uVar2 * 2,iVar1 + 0x484 + uVar2 * 2,
               *(undefined4 *)(iVar1 + uVar2 * 4 + 0x1c0),param_4);
  return 0 < *(short *)(iVar1 + (uint)*(byte *)(param_1 + 4) * 2 + 0x484);
}

