
bool FUN_02158d38(int param_1,int param_2,short param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (uint)*(byte *)(param_1 + 4);
  iVar2 = param_3 * 0x4dc;
  iVar4 = param_2 + 0x20 + iVar2;
  if (uVar3 < 4) {
    FUN_02158e64(uVar3 * 0xc + iVar4 + 0x370,iVar4 + 0x418 + uVar3 * 2,iVar4 + 0x434 + uVar3 * 2,
                 iVar4 + 0x450 + uVar3 * 2,*(undefined4 *)(param_2 + iVar2 + uVar3 * 4 + 0x1e0),0,
                 *(undefined1 *)(iVar4 + 0x4db),param_4);
  }
  else {
    FUN_02158e64(uVar3 * 0xc + iVar4 + 0x370,iVar4 + 0x418 + uVar3 * 2,iVar4 + 0x434 + uVar3 * 2,
                 iVar4 + 0x450 + uVar3 * 2,0,
                 *(undefined4 *)(param_2 + iVar2 + (uVar3 - 4) * 4 + 0x1f0),
                 *(undefined1 *)(iVar4 + 0x4db),param_4);
  }
  iVar2 = iVar4 + (uint)*(byte *)(param_1 + 4) * 2;
  bVar1 = 0 < *(short *)(iVar2 + 0x450);
  if (!bVar1) {
    *(int *)((uint)*(byte *)(param_1 + 4) * 0xc + iVar4 + 0x370) =
         (int)*(short *)(iVar2 + 0x418) << 0xc;
    *(int *)((uint)*(byte *)(param_1 + 4) * 0xc + iVar4 + 0x374) =
         (int)*(short *)(iVar4 + (uint)*(byte *)(param_1 + 4) * 2 + 0x434) << 0xc;
  }
  return bVar1;
}

