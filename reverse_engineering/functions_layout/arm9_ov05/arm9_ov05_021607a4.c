
void FUN_021607a4(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  if (param_2 == -1) {
    *(char *)(param_1 + 0x2b2) = *(char *)(param_1 + 0x2b2) + '\x01';
    if ('\x02' < *(char *)(param_1 + 0x2b2)) {
      *(undefined1 *)(param_1 + 0x2b2) = 0;
    }
    param_2 = (int)*(char *)(param_1 + 0x2b2);
  }
  else {
    *(char *)(param_1 + 0x2b2) = (char)param_2;
  }
  uStack_18 = param_4;
  if (param_2 == 2) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x18) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x18) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,1);
    piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  }
  local_20 = (int)*(short *)(&DAT_0216d6b6 + param_2 * 4) << 0xc;
  local_1c = (int)*(short *)(&DAT_0216d6b4 + param_2 * 4) << 0xc;
  FUN_0214ce68(*(undefined4 *)(param_1 + 0x20),&local_1c,&local_20);
  func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0x98) + 4),1);
  iVar3 = 0;
  do {
    iVar2 = 5;
    do {
      local_28 = (iVar2 * 0x18 + 0x10) * 0x10000 >> 0x10;
      if (*(char *)(param_1 + 0x2b2) == '\x02') {
        if (6 < iVar2) {
          local_28 = local_28 + 7;
        }
      }
      else if (4 < iVar2) {
        local_28 = local_28 + 7;
      }
      local_28 = local_28 << 0xc;
      local_24 = (iVar3 * 0x10 + 0x30) * 0x10000 >> 4;
      FUN_0214ce68(*(undefined4 *)(param_1 + iVar3 * 0x28 + iVar2 * 4 + 0x98),&local_28,&local_24);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  if (*(char *)(param_1 + 0x2b2) == '\x02') {
    piVar1 = *(int **)(*(int *)(param_1 + 0x150) + 4);
    (**(code **)(*piVar1 + 0x164))(piVar1,4);
    iVar3 = 7;
    do {
      iVar2 = param_1 + iVar3 * 4;
      piVar1 = *(int **)(*(int *)(iVar2 + 0x110) + 4);
      (**(code **)(*piVar1 + 0x160))(piVar1,2,*(undefined4 *)(*(int *)(iVar2 + 0x160) + 4));
      piVar1 = *(int **)(*(int *)(iVar2 + 0x160) + 4);
      (**(code **)(*piVar1 + 0x160))(piVar1,1,*(undefined4 *)(*(int *)(iVar2 + 0x110) + 4));
      func_0x021b65d8(*(undefined4 *)(*(int *)(iVar2 + 0x138) + 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 10);
  }
  else {
    piVar1 = *(int **)(*(int *)(param_1 + 0x150) + 4);
    (**(code **)(*piVar1 + 0x160))(piVar1,4,*(undefined4 *)(*(int *)(param_1 + 0x154) + 4));
    iVar3 = 7;
    do {
      iVar2 = param_1 + iVar3 * 4;
      piVar1 = *(int **)(*(int *)(iVar2 + 0x110) + 4);
      (**(code **)(*piVar1 + 0x160))(piVar1,2,*(undefined4 *)(*(int *)(iVar2 + 0x138) + 4));
      piVar1 = *(int **)(*(int *)(iVar2 + 0x160) + 4);
      (**(code **)(*piVar1 + 0x160))(piVar1,1,*(undefined4 *)(*(int *)(iVar2 + 0x138) + 4));
      func_0x021b65e0(*(undefined4 *)(*(int *)(iVar2 + 0x138) + 4));
      iVar3 = iVar3 + 1;
    } while (iVar3 < 10);
  }
  if (*(int *)(param_1 + 4) == 3) {
    func_0x021b6214(*(undefined4 *)(*(int *)(param_1 + 0xb4) + 4),1);
    iVar3 = 0;
    do {
      iVar2 = 0;
      iVar4 = param_1 + iVar3 * 0x28;
      do {
        if ((iVar3 < 3) && (6 < iVar2)) {
          func_0x021b65e0(*(undefined4 *)(*(int *)(iVar4 + iVar2 * 4 + 0x98) + 4));
        }
        else {
          func_0x021b65d8(*(undefined4 *)(*(int *)(iVar4 + iVar2 * 4 + 0x98) + 4));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 10);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 8);
    func_0x021b65e0(*(undefined4 *)(*(int *)(param_1 + 300) + 4));
    iVar3 = 0;
    do {
      piVar1 = *(int **)(*(int *)(param_1 + iVar3 * 0x28 + 0xb4) + 4);
      (**(code **)(*piVar1 + 0x164))(piVar1,8);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    piVar1 = *(int **)(*(int *)(param_1 + 300) + 4);
    (**(code **)(*piVar1 + 0x164))(piVar1,4);
    piVar1 = *(int **)(*(int *)(param_1 + 300) + 4);
    (**(code **)(*piVar1 + 0x164))(piVar1,2);
    piVar1 = *(int **)(*(int *)(param_1 + 0x108) + 4);
    (**(code **)(*piVar1 + 0x164))(piVar1,2);
    piVar1 = *(int **)(*(int *)(param_1 + 0x10c) + 4);
    (**(code **)(*piVar1 + 0x164))(piVar1,2);
  }
  if (param_3 != 0) {
    FUN_0207342c(0x78,6);
  }
  return;
}

