
void FUN_0215d20c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(short *)(iVar2 + 0x1b6) = *(short *)(iVar2 + 0x1b6) + 1;
  if (0xf < *(ushort *)(iVar2 + 0x1b6)) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215d3bc);
    FUN_0214f7a4(iVar2 + 0x6c);
    FUN_0214f7a4(iVar2 + 0x124);
    FUN_0215cb48(iVar2 + 0xa0);
    FUN_0215cb48(iVar2 + 0x158);
    iVar1 = FUN_0203b414(3);
    uVar3 = *(undefined4 *)(iVar1 + 0x88);
    iVar1 = FUN_0203b3f4();
    FUN_0215c628(iVar2,iVar2 + 0xa0,1,*(undefined4 *)(iVar1 + 0x88),uVar3,0);
    *(char *)(iVar2 + 0x1b5) = *(char *)(iVar2 + 0x1b5) + -1;
    iVar1 = FUN_0203b424(3);
    uVar3 = *(undefined4 *)(iVar1 + 0x88);
    iVar1 = FUN_0203b3e4();
    FUN_0215c628(iVar2,iVar2 + 0x158,1,*(undefined4 *)(iVar1 + 0x88),uVar3,1);
    *(undefined2 *)(iVar2 + 0x1b6) = 0;
  }
  return;
}

