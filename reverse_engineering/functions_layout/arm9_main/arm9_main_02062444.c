
void FUN_02062444(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint local_18;
  
                    /* JUS-TAG strings=["[SDK+NINTENDO:BACKUP]"] */
  iVar1 = param_1[0xb];
  uVar7 = param_1[0xd];
  iVar2 = param_1[0xc];
  local_18 = 0x100;
  FUN_02000b54(s___SDK_NINTENDO_BACKUP__02000b7b + 1);
  if (iVar1 == 0xb) {
    local_18 = FUN_02062368();
  }
  do {
    uVar5 = param_1[9];
    if (local_18 < (uint)param_1[9]) {
      uVar5 = local_18;
    }
    *(uint *)(*param_1 + 0x14) = uVar5;
    if ((param_1[0x45] & 0x40U) != 0) {
      param_1[0x45] = param_1[0x45] & 0xffffffbf;
      *(undefined4 *)*param_1 = 7;
      break;
    }
    if (uVar7 < 4) {
      (*(code *)((int)&switchD_020624ac::switchdataD_020624ae +
                (int)(short)(&switchD_020624ac::switchdataD_020624ae)[uVar7]))();
      return;
    }
    iVar3 = FUN_02062b60(param_1,iVar1,iVar2);
    if (iVar3 == 0) break;
    if (uVar7 == 2) {
      iVar3 = FUN_02062b60(param_1,9,1);
      if (iVar3 == 0) break;
    }
    else if (uVar7 == 0) {
      FUN_02051890(param_1 + 0x48,param_1[8],uVar5);
    }
    param_1[7] = param_1[7] + uVar5;
    param_1[8] = param_1[8] + uVar5;
    param_1[9] = param_1[9] - uVar5;
  } while (param_1[9] != 0);
  pcVar6 = (code *)param_1[0xe];
  iVar1 = param_1[0xf];
  uVar4 = OS_DisableInterrupts();
  param_1[0x45] = param_1[0x45] & 0xffffffb3;
  FUN_02053210(param_1 + 0x43);
  if ((param_1[0x45] & 0x10U) != 0) {
    FUN_020531dc(param_1 + 0x11);
  }
  OS_RestoreInterrupts(uVar4);
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(iVar1);
  }
  return;
}

