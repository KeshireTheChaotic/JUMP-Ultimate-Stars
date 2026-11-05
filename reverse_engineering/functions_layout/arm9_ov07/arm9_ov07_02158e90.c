
void FUN_02158e90(int param_1,int *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  int iVar12;
  
  iVar12 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar3 = (**(code **)(*param_2 + 8))();
  switch(uVar3) {
  case 0x70000000:
    uVar3 = (**(code **)(*param_2 + 4))();
    uVar9 = (**(code **)*param_2)();
    iVar7 = FUN_0215961c(iVar12,uVar9,uVar3);
    if (iVar7 == 0) {
      pcVar11 = (char *)(iVar12 + 0x10);
      for (iVar7 = 0; iVar7 < 0xc; iVar7 = iVar7 + 1) {
        if (*pcVar11 == '\0') goto LAB_02158f98;
        pcVar11 = pcVar11 + 0xdc;
      }
      pcVar11 = (char *)0x0;
LAB_02158f98:
      if (pcVar11 != (char *)0x0) {
        FUN_02051890(uVar9,pcVar11 + 0x1c,0xc0);
        FUN_02051890(uVar3,pcVar11 + 4,0x18);
        *pcVar11 = '\x01';
        FUN_02159694(iVar12,pcVar11);
      }
    }
    else {
      iVar5 = thunk_FUN_020024cc(iVar7 + 4,uVar3,0x18);
      if (iVar5 != 0) {
        FUN_02051890(uVar9,iVar7 + 0x1c,0xc0);
        FUN_02051890(uVar3,iVar7 + 4,0x18);
        FUN_02159694(iVar12,iVar7);
      }
    }
    break;
  case 0x70000001:
    uVar3 = (**(code **)(*param_2 + 4))();
    uVar9 = (**(code **)*param_2)();
    puVar4 = (undefined1 *)FUN_0215961c(iVar12,uVar9,uVar3);
    if (puVar4 != (undefined1 *)0x0) {
      *puVar4 = 0;
      FUN_02159694(iVar12,puVar4);
      iVar7 = FUN_0200d338((int)puVar4 - (iVar12 + 0x10),0xdc);
      for (; iVar7 < 0xb; iVar7 = iVar7 + 1) {
        FUN_02051890(iVar7 * 0xdc + iVar12 + 0x10,(iVar7 + 1) * 0xdc + iVar12 + 0x10,0xdc);
      }
      *(undefined1 *)(iVar12 + 0x984) = 0;
    }
    break;
  case 0x70000002:
    iVar7 = (**(code **)(*param_2 + 4))();
    uVar3 = (**(code **)*param_2)();
    pcVar11 = (char *)(iVar12 + 0xa64);
    for (iVar5 = 0; iVar5 < 0xb; iVar5 = iVar5 + 1) {
      if (*pcVar11 == '\0') goto LAB_021590d4;
      pcVar11 = pcVar11 + 0x22;
    }
    pcVar11 = (char *)0x0;
LAB_021590d4:
    if (pcVar11 != (char *)0x0) {
      if (*(char *)(iVar7 + 0x16) == '\0') {
        iVar5 = FUN_021597b4();
        if (*(int *)(iVar12 + 8) <= iVar5) {
          return;
        }
      }
      else {
        iVar5 = FUN_021597fc();
        if (*(int *)(iVar12 + 0xc) <= iVar5) {
          return;
        }
      }
      FUN_02051890(uVar3,pcVar11 + 4,6);
      FUN_02051890(iVar7,pcVar11 + 10,0x18);
      *pcVar11 = '\x01';
      iVar7 = FUN_0200d338((int)pcVar11 - (iVar12 + 0xa64),0x22);
      FUN_02070cdc(iVar7 + 1);
      FUN_02159740(iVar12,pcVar11);
      cVar1 = FUN_021597fc();
      if (*(char *)(iVar12 + 0xbe0) != cVar1) {
        *(char *)(iVar12 + 0xbe0) = cVar1;
      }
    }
    break;
  case 0x70000003:
    uVar3 = (**(code **)*param_2)();
    pcVar11 = (char *)(iVar12 + 0xa64);
    for (iVar7 = 0; iVar7 < 0xb; iVar7 = iVar7 + 1) {
      if ((*pcVar11 != '\0') && (iVar5 = thunk_FUN_020024cc(pcVar11 + 4,uVar3,6), iVar5 == 0))
      goto LAB_021591d4;
      pcVar11 = pcVar11 + 0x22;
    }
    pcVar11 = (char *)0x0;
LAB_021591d4:
    if (pcVar11 != (char *)0x0) {
      iVar7 = FUN_0200d338((int)pcVar11 - (iVar12 + 0xa64),0x22);
      FUN_02070cdc(iVar7 + 1);
      *pcVar11 = '\0';
      FUN_02159740(iVar12,pcVar11);
      for (; iVar7 < 10; iVar7 = iVar7 + 1) {
        FUN_02051890((iVar7 + 1) * 0x22 + iVar12 + 0xa64,iVar7 * 0x22 + iVar12 + 0xa64,0x22);
      }
      *(undefined1 *)(iVar12 + 3000) = 0;
      cVar1 = FUN_021597fc();
      if (*(char *)(iVar12 + 0xbe0) != cVar1) {
        *(char *)(iVar12 + 0xbe0) = cVar1;
      }
    }
    break;
  case 0x70000004:
    uVar6 = (**(code **)*param_2)();
    if (uVar6 < 0x12) {
      if (0x10 < uVar6) {
        iVar7 = (**(code **)(*param_2 + 4))();
        *(undefined1 *)(iVar12 + iVar7 + 0xbe1) = 1;
        return;
      }
      if (uVar6 < 6) {
        if (uVar6 == 0) {
          *(undefined1 *)(iVar12 + 0xbe5) = 1;
          if (-1 < *(char *)(iVar12 + 0xbe6)) {
            *(undefined1 *)(iVar12 + *(char *)(iVar12 + 0xbe6) + 0xbe1) = 0;
          }
          iVar7 = FUN_0208c11c();
          *(undefined1 *)(iVar12 + iVar7 + 0xbe1) = 1;
          uVar2 = FUN_0208c11c();
          *(undefined1 *)(iVar12 + 0xbe6) = uVar2;
          DAT_020afe98 = (int)*(char *)(iVar12 + 0xbe6);
          return;
        }
        if (uVar6 == 4) {
          iVar7 = (**(code **)(*param_2 + 4))();
          *(undefined1 *)(iVar12 + iVar7 + 0xbe1) = 0;
          if (-1 < *(char *)(iVar12 + 0xbe6)) {
            *(undefined1 *)(iVar12 + *(char *)(iVar12 + 0xbe6) + 0xbe1) = 0;
          }
          iVar7 = FUN_0208c11c();
          *(undefined1 *)(iVar12 + iVar7 + 0xbe1) = 1;
          uVar2 = FUN_0208c11c();
          *(undefined1 *)(iVar12 + 0xbe6) = uVar2;
          DAT_020afe98 = (int)*(char *)(iVar12 + 0xbe6);
          return;
        }
        if (uVar6 == 5) {
          *(undefined1 *)(iVar12 + 0xbe1) = 1;
          iVar7 = FUN_0208c11c();
          *(undefined1 *)(iVar12 + iVar7 + 0xbe1) = 1;
          uVar2 = FUN_0208c11c();
          *(undefined1 *)(iVar12 + 0xbe6) = uVar2;
          DAT_020afe98 = (int)*(char *)(iVar12 + 0xbe6);
          (**(code **)(*param_2 + 4))();
          FUN_0208c11c();
          return;
        }
      }
    }
    else if (uVar6 == 0x26) {
      (**(code **)(*param_2 + 4))();
      (**(code **)(*param_2 + 4))();
      uVar2 = (**(code **)(*param_2 + 4))();
      *(undefined1 *)(iVar12 + 0xbe0) = uVar2;
      uVar6 = (**(code **)(*param_2 + 4))();
      for (uVar8 = 0; uVar8 < (uVar6 >> 8 & 0xff); uVar8 = uVar8 + 1 & 0xff) {
        *(undefined1 *)(iVar12 + uVar8 + 0xbe1) = 1;
      }
      for (; uVar8 < 4; uVar8 = uVar8 + 1 & 0xff) {
        *(undefined1 *)(iVar12 + uVar8 + 0xbe1) = 0;
      }
      return;
    }
    FUN_021595e0(iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      uVar3 = (**(code **)(*param_2 + 8))();
      uVar9 = (**(code **)*param_2)();
      uVar10 = (**(code **)(*param_2 + 4))();
      ALObjectImp::PostMessage(param_1,*(undefined4 *)(iVar12 + 4),uVar3,uVar9,uVar10,0);
    }
    break;
  case 0x70000005:
  default:
    FUN_021595e0(iVar12);
    if (*(int *)(iVar12 + 4) != 0) {
      uVar3 = (**(code **)(*param_2 + 8))();
      uVar9 = (**(code **)*param_2)();
      uVar10 = (**(code **)(*param_2 + 4))();
      ALObjectImp::PostMessage(param_1,*(undefined4 *)(iVar12 + 4),uVar3,uVar9,uVar10,0);
    }
    break;
  case 0x70000006:
    *(undefined1 *)(iVar12 + 0xbe7) = 1;
  }
  return;
}

