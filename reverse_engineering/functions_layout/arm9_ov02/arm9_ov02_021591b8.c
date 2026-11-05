
bool FUN_021591b8(int param_1,int param_2,short param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = param_2 + 0x20 + param_3 * 0x4dc;
  *(undefined2 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 2 + 0x484) = *(undefined2 *)(param_1 + 6);
  *(undefined2 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 2 + 0x494) = *(undefined2 *)(param_1 + 8);
  uVar2 = (uint)*(byte *)(param_1 + 4);
  FUN_02159db4(iVar3 + 0x48c + uVar2 * 2,iVar3 + 0x494 + uVar2 * 2,iVar3 + 0x484 + uVar2 * 2,
               *(undefined4 *)(iVar3 + uVar2 * 4 + 0x1c0));
  uVar2 = (uint)*(byte *)(param_1 + 4);
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(undefined2 *)(uVar2 * 0xc + iVar3 + 0x192) = *(undefined2 *)(iVar3 + uVar2 * 2 + 0x48c);
    *(undefined2 *)((uint)*(byte *)(param_1 + 4) * 0xc + iVar3 + 0x194) =
         *(undefined2 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 2 + 0x494);
    *(undefined4 *)((uint)*(byte *)(param_1 + 4) * 0xc + iVar3 + 0x18c) =
         *(undefined4 *)(param_2 + param_3 * 0x4dc + (uint)*(byte *)(param_1 + 4) * 4 + 0x1e0);
    *(undefined2 *)((uint)*(byte *)(param_1 + 4) * 0xc + iVar3 + 400) =
         *(undefined2 *)(iVar3 + (uint)*(byte *)(param_1 + 4) * 2 + 0x484);
    *(byte *)((uint)*(byte *)(param_1 + 4) * 0xc + iVar3 + 0x196) = *(byte *)(param_1 + 4);
    return false;
  }
  bVar1 = 0 < *(short *)(iVar3 + uVar2 * 2 + 0x484);
  if (bVar1) {
    *(code **)(iVar3 + 0x1bc) = FUN_021592ec;
  }
  return bVar1;
}

