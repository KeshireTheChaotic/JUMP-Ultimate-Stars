
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_020589cc(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar5;
  undefined1 auStack_10 [4];
  
  puVar4 = auStack_10;
  iVar2 = FUN_02058060();
  iVar3 = FUN_02057f40(2,7,8);
  if (iVar3 != 0) {
    return 0;
  }
  DC_InvalidateRange(*(int *)(iVar2 + 4) + 0xc,4);
  if (*(int *)(*(int *)(iVar2 + 4) + 0xc) == 1) {
                    /* WARNING: Could not recover jumptable at 0x02058a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (*UNRECOVERED_JUMPTABLE)(0);
    return iVar2;
  }
  DC_InvalidateRange(*(int *)(iVar2 + 4) + 0x188,2);
  bVar5 = *(short *)(*(int *)(iVar2 + 4) + 0x188) != 0;
  DC_InvalidateRange(*(int *)(iVar2 + 4) + 0x3e,2);
  if (bVar5) {
    puVar4 = auStack_10 + 4;
  }
  uVar1 = *(ushort *)(*(int *)(iVar2 + 4) + 0x3e);
  if (bVar5) {
                    /* WARNING: Could not recover jumptable at 0x02058a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar2 = (**(code **)(puVar4 + 8))();
    return iVar2;
  }
  DC_InvalidateRange(*(int *)(iVar2 + 4) + 0xf8,2);
  return ((uVar1 + 0xc) * (uint)*(ushort *)(*(int *)(iVar2 + 4) + 0xf8) + 0x29 & 0xffffffe0) << 1;
}

