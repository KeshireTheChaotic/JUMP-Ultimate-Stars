
int FUN_021602bc(undefined4 param_1,uint param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 *puVar11;
  int iStack_30;
  uint uStack_2c;
  
  iVar9 = 0;
  switch(param_1) {
  case 0:
    *(undefined4 *)(DAT_0216ad8c + 0xd8) = 0;
    iVar8 = DAT_0216ad8c;
    uVar5 = OS_DisableInterrupts();
    DAT_0216ad88 = 0;
    if (*(code **)(DAT_0216ad8c + 4) != (code *)0x0) {
      (**(code **)(DAT_0216ad8c + 4))(0,iVar8);
    }
    OS_RestoreInterrupts(uVar5);
    break;
  case 1:
    iVar8 = FUN_02160064();
    if (iVar8 == 3) {
      if (*(int *)(DAT_0216ad8c + 0xd8) == 0) {
        iVar8 = FUN_0215fe58(DAT_0216ad8c + 8);
        if (iVar8 == 0) {
          FUN_0215eac8(DAT_0216ad8c + 0x120,5);
        }
        else {
          FUN_02160874();
          FUN_0215e93c(DAT_0216ad8c + 0x5760,DAT_0216ad8c + 0xe0);
          FUN_0215eac8(DAT_0216ad8c + 0x120,4);
        }
      }
      else {
        FUN_0215eac8(DAT_0216ad8c + 0x120,2);
      }
    }
    else {
      FUN_0215eac8(DAT_0216ad8c + 0x120,0);
    }
    break;
  case 2:
    *(undefined4 *)(DAT_0216ad8c + 0xd8) = 0;
    uVar5 = OS_DisableInterrupts();
    DAT_0216ad88 = 2;
    if (*(code **)(DAT_0216ad8c + 4) != (code *)0x0) {
      (**(code **)(DAT_0216ad8c + 4))(2,0);
    }
    OS_RestoreInterrupts(uVar5);
    break;
  case 3:
    goto LAB_0216053c;
  case 4:
LAB_0216053c:
    iVar8 = FUN_02160064();
    if (iVar8 == 3) {
      if (*(int *)(DAT_0216ad8c + 0xd8) != 0) {
        FUN_0215eac8(DAT_0216ad8c + 0x120,2);
      }
    }
    else {
      FUN_0215eac8(DAT_0216ad8c + 0x120,0);
    }
    *(undefined1 *)(DAT_0216ad8c + 0xdc) = 0;
    uVar1 = *(ushort *)(DAT_0216ad8c + 0x5204);
    iVar8 = DAT_0216ad8c + 0x58;
    *(ushort *)(iVar8 + (uint)uVar1 * 8) = uVar1;
    FUN_020554a8(iVar8 + (uint)uVar1 * 8 + 2);
    break;
  case 5:
    if ((((*(int *)(DAT_0216ad8c + 0xd8) == 0) && (iVar8 = FUN_02160064(), iVar8 == 3)) &&
        (FUN_0215e93c(DAT_0216ad8c + 0x5760,DAT_0216ad8c + 0xe0),
        *(short *)(DAT_0216ad8c + 0x5206) == 0)) &&
       (*(char *)(DAT_0216ad8c + 0xdc) = *(char *)(DAT_0216ad8c + 0xdc) + '\x01',
       10 < *(byte *)(DAT_0216ad8c + 0xdc))) {
      *(undefined1 *)(DAT_0216ad8c + 0xdc) = 0;
      iVar8 = FUN_0215fe58(DAT_0216ad8c + 8);
      if (iVar8 == 0) {
        FUN_0215eac8(DAT_0216ad8c + 0x120,5);
      }
    }
    break;
  case 6:
    uStack_2c = param_2;
    iStack_30 = FUN_0215e86c(DAT_0216ad8c + 0x5760);
    (**(code **)(DAT_0216ad8c + 4))(6,&iStack_30);
    iVar9 = iStack_30;
    if (iStack_30 != 0) {
      *(undefined4 *)(DAT_0216ad8c + 0xe8) = *(undefined4 *)(*(int *)(DAT_0216ad8c + 0x5780) + 4);
    }
    break;
  case 7:
    FUN_0215e84c(DAT_0216ad8c + 0x5760);
    break;
  case 8:
    FUN_0215e800(DAT_0216ad8c + 0x5760);
    iVar8 = (**(code **)(*(int *)(*(int *)(DAT_0216ad8c + 0x5780) + 0xc) + 0x20))
                      (DAT_0216ad8c + 0x5760);
    if (iVar8 == 0) {
      FUN_0215eac8(DAT_0216ad8c + 0x120,3);
    }
    break;
  case 9:
    FUN_0215e7cc(DAT_0216ad8c + 0x5760,param_2,param_2 + 0x14);
    break;
  case 10:
    iVar10 = *(int *)(DAT_0216ad8c + 0x5780);
    iVar8 = FUN_02160040();
    if (iVar8 == 0) {
      uVar2 = *(undefined2 *)(DAT_0216ad8c + 0x528c);
      uVar6 = DAT_0216ad8c + 0x5200;
      uVar3 = *(undefined2 *)(DAT_0216ad8c + 0x528e);
    }
    else {
      uVar2 = *(undefined2 *)(DAT_0216ad8c + 0x114);
      uVar6 = DAT_0216ad8c + 0x100;
      uVar3 = *(undefined2 *)(DAT_0216ad8c + 0x116);
    }
    if (iVar8 != 0) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x10);
    }
    bVar4 = false;
    if (iVar8 == 0) {
      uVar6 = 0;
    }
    puVar11 = (undefined2 *)(DAT_0216ad8c + 0x58 + (uVar6 & 0xffff) * 8);
    if (((*(int *)(DAT_0216ad8c + 0xd8) == 0) && (iVar7 = FUN_02160064(), iVar7 == 3)) &&
       (iVar10 != 0)) {
      bVar4 = true;
    }
    *puVar11 = (short)uVar6;
    iVar7 = DAT_0216ad8c;
    if (iVar8 == 0) {
      puVar11[1] = *(undefined2 *)(DAT_0216ad8c + 0x5244);
      puVar11[2] = *(undefined2 *)(iVar7 + 0x5246);
      puVar11[3] = *(undefined2 *)(iVar7 + 0x5248);
    }
    else {
      puVar11[1] = *(undefined2 *)(param_2 + 10);
      puVar11[2] = *(undefined2 *)(param_2 + 0xc);
      puVar11[3] = *(undefined2 *)(param_2 + 0xe);
    }
    FUN_0215e9f4(DAT_0216ad8c + 0x5760,uVar2,uVar3);
    if (((bVar4) && (*(int *)(iVar10 + 0x10) != 0)) && (*(int *)(iVar10 + 0x20) != 0)) {
      FUN_0215e9cc(DAT_0216ad8c + 0x5760,*(int *)(iVar10 + 0x10),*(undefined4 *)(iVar10 + 0x14),
                   *(int *)(iVar10 + 0x20),*(undefined4 *)(iVar10 + 0x24));
    }
    FUN_0215e7fc(DAT_0216ad8c + 0x5760,1 << (uVar6 & 0xff) & 0xffff);
    if (bVar4) {
      (**(code **)(DAT_0216ad8c + 4))(4,puVar11);
    }
    break;
  case 0xb:
    FUN_0215e7f8(DAT_0216ad8c + 0x5760,param_2 & 0xffff);
    iVar8 = FUN_02160010();
    if ((iVar8 == 0) &&
       (((iVar8 = FUN_02160064(), iVar8 == 3 || (iVar8 = FUN_02160064(), iVar8 == 1)) ||
        (*(int *)(DAT_0216ad8c + 0x5780) == 0)))) {
      *(undefined1 *)(DAT_0216ad8c + 0xdc) = 0;
      FUN_0215eac8(DAT_0216ad8c + 0x120,3);
    }
    break;
  default:
    FUN_02055684();
  }
  return iVar9;
}

