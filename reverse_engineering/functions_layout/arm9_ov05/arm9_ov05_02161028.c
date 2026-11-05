
void FUN_02161028(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int extraout_r1;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar7 = (int)*(short *)(iVar6 + 0x2b0);
  if ((int)(uint)*(byte *)(*(int *)(iVar6 + 0xc) + 0xe) < iVar7) {
    bVar1 = false;
    goto LAB_02161150;
  }
  FUN_0200d12c(uVar4,10);
  iVar3 = FUN_0200d12c(uVar4,10);
  puVar5 = (&PTR_DAT_02170a84)[*(char *)(iVar6 + 0x2b2) * 10 + iVar3];
  if (iVar7 < *(short *)(iVar6 + 0x2ae)) {
    iVar7 = FUN_02160a48(iVar6,puVar5 + extraout_r1 * 2,iVar6 + 0x2b7 + iVar7 * 2);
    if (iVar7 == 0) {
      if ((int)(uint)*(byte *)(*(int *)(iVar6 + 0xc) + 0xe) <= (int)*(short *)(iVar6 + 0x2b0)) {
        bVar1 = false;
        goto LAB_02161150;
      }
      uVar2 = FUN_0200d12c((int)*(short *)(iVar6 + 0x2b0),
                           *(undefined1 *)(*(int *)(iVar6 + 0xc) + 0xd));
      *(undefined1 *)(iVar6 + 0x2b3) = uVar2;
      FUN_02074268(iVar6 + 0x2b7 + *(short *)(iVar6 + 0x2b0) * 2,puVar5 + extraout_r1 * 2,1);
      *(short *)(iVar6 + 0x2b0) = *(short *)(iVar6 + 0x2b0) + 1;
    }
    else {
      if (iVar7 == 1) {
        bVar1 = false;
        goto LAB_02161150;
      }
      if (iVar7 == 2) {
        uVar2 = FUN_0200d12c((int)*(short *)(iVar6 + 0x2b0),
                             *(undefined1 *)(*(int *)(iVar6 + 0xc) + 0xd));
        *(undefined1 *)(iVar6 + 0x2b3) = uVar2;
      }
    }
  }
  else {
    iVar7 = FUN_02160a48(iVar6,puVar5 + extraout_r1 * 2,
                         iVar6 + 0x2b7 + (*(short *)(iVar6 + 0x2ae) + -1) * 2);
    if (iVar7 == 0) {
      if ((int)(uint)*(byte *)(*(int *)(iVar6 + 0xc) + 0xe) <= (int)*(short *)(iVar6 + 0x2b0)) {
        bVar1 = false;
        goto LAB_02161150;
      }
      uVar2 = FUN_0200d12c((int)*(short *)(iVar6 + 0x2b0),
                           *(undefined1 *)(*(int *)(iVar6 + 0xc) + 0xd));
      *(undefined1 *)(iVar6 + 0x2b3) = uVar2;
      FUN_020741f4(iVar6 + 0x2b7 + *(short *)(iVar6 + 0x2ae) * 2,puVar5 + extraout_r1 * 2,1);
      *(short *)(iVar6 + 0x2ae) = *(short *)(iVar6 + 0x2ae) + 1;
      *(undefined2 *)(iVar6 + 0x2b0) = *(undefined2 *)(iVar6 + 0x2ae);
    }
    else if (iVar7 == 1) {
      bVar1 = false;
      goto LAB_02161150;
    }
  }
  bVar1 = true;
  *(undefined1 *)(iVar6 + 0x3e1) = 1;
LAB_02161150:
  if (bVar1) {
    FUN_0207342c(0x78,0xb);
  }
  else {
    FUN_0207342c(0x78,2);
  }
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  return;
}

