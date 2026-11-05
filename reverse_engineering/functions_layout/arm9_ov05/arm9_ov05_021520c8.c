
void FUN_021520c8(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iStack_20;
  int aiStack_1c [3];
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (iVar4 == 6) {
    func_0x021b65cc();
    iVar4 = 0;
    do {
      FUN_02153a9c(iVar3,iVar4);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    FUN_0207342c(0x78,0);
  }
  else {
    *(undefined1 *)(iVar3 + iVar4 + 0x546) = 1;
    *(undefined1 *)(iVar3 + iVar4 + 0x54c) = 1;
    iVar1 = iVar4 * 0x14;
    FUN_0215ed18(iVar3 + 0x3dc,1,0x1f,1);
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar3 + 100) + 4));
    func_0x021b65d8(*(undefined4 *)(*(int *)(iVar3 + 0x90) + 4));
    if (iVar4 == 3) {
      *(char *)(iVar3 + 0x542) = (char)((uint)*(undefined4 *)(iVar3 + 0x460) >> 0x10);
    }
    *(char *)(iVar3 + 0x439) = (char)iVar4;
    *(undefined *)(iVar3 + 0x46d) = (&DAT_0216d564)[iVar1];
    aiStack_1c[1] = 0xffff0000;
    aiStack_1c[2] = 0xffff8000;
    FUN_0214ce68(*(undefined4 *)(iVar3 + iVar4 * 4 + 0x188),aiStack_1c + 2,aiStack_1c + 1);
    piVar2 = *(int **)(*(int *)(iVar3 + iVar4 * 4 + 0x188) + 4);
    (**(code **)(*piVar2 + 0xd8))(piVar2,1);
    (**(code **)(&DAT_0216d558 + iVar1))(iVar3);
    FUN_02153b7c(iVar3,iVar4,1);
    FUN_02073f24(0x12,0,0x1e);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar3 + 0xcc) + 4),1);
    aiStack_1c[0] = (uint)(byte)(&DAT_0216d562)[iVar1] << 0xc;
    iStack_20 = (uint)(byte)(&DAT_0216d561)[iVar1] << 0xc;
    FUN_0214ce68(*(undefined4 *)(iVar3 + 0xcc),&iStack_20,aiStack_1c);
    FUN_02028384(*(undefined4 *)(*(int *)(iVar3 + 0xcc) + 4),FUN_02153228);
    FUN_0207342c(0x78,4);
  }
  return;
}

