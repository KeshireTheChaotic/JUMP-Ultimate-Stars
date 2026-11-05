
void FUN_021600c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint extraout_r1;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_74;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24 [4];
  
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  local_24[3] = param_4;
  if (*(char *)(iVar6 + 0x3e1) != '\0') {
    *(undefined1 *)(iVar6 + 0x3e1) = 0;
    FUN_02074178(iVar6 + 0x3b8,
                 iVar6 + 0x2b7 +
                 (uint)*(byte *)(*(int *)(iVar6 + 0xc) + 0xd) * (int)*(char *)(iVar6 + 0x2b3) * 2);
    piVar4 = *(int **)(*(int *)(iVar6 + *(char *)(iVar6 + 0x2b3) * 4 + 0x1dc) + 4);
    (**(code **)(*(int *)piVar4[0x19] + 0x70))();
    (**(code **)(*piVar4 + 0xc4))();
    piVar4 = *(int **)(*(int *)(*(int *)(iVar6 + *(char *)(iVar6 + 0x2b3) * 4 + 0x1dc) + 4) + 100);
    (**(code **)(*piVar4 + 0x68))(piVar4,iVar6 + 0x3b8);
    iVar7 = *(int *)(iVar6 + 0xc);
    sVar1 = *(short *)(iVar6 + 0x2b0);
    cVar2 = FUN_0200d12c((int)sVar1,*(undefined1 *)(iVar7 + 0xd));
    iVar8 = (int)cVar2;
    if ((int)sVar1 < (int)(uint)*(byte *)(iVar7 + 0xe)) {
      FUN_02152950(&local_60,*(undefined4 *)(iVar6 + 0x1dc + iVar8 * 4));
      iVar7 = local_60 + ((uint)(local_60 >> 0xb) >> 0x14);
      FUN_02152964(&local_5c,*(undefined4 *)(iVar6 + 0x1dc + iVar8 * 4));
      local_74 = local_5c + ((uint)(local_5c >> 0xb) >> 0x14);
      FUN_0200d12c((int)*(short *)(iVar6 + 0x2b0),*(undefined1 *)(*(int *)(iVar6 + 0xc) + 0xd));
      uVar5 = extraout_r1;
    }
    else {
      iVar3 = (iVar8 + -1) * 4;
      FUN_02152950(&local_68,*(undefined4 *)(iVar6 + 0x1dc + iVar3));
      iVar7 = local_68 + ((uint)(local_68 >> 0xb) >> 0x14);
      FUN_02152964(&local_64,*(undefined4 *)(iVar6 + 0x1dc + iVar3));
      local_74 = local_64 + ((uint)(local_64 >> 0xb) >> 0x14);
      uVar5 = (uint)*(byte *)(*(int *)(iVar6 + 0xc) + 0xd);
    }
    local_74 = local_74 >> 0xc;
    iVar3 = 0;
    do {
      local_58 = (local_74 + 8) * 0x1000;
      FUN_02150070(*(undefined4 *)(iVar6 + iVar3 * 4 + 0x27c),&local_58);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    if (*(int *)(iVar6 + 4) == 4) {
      *(undefined1 *)(iVar6 + 0x2b4) = *(undefined1 *)(iVar6 + 0x2b5);
      *(char *)(iVar6 + 0x2b5) = (char)((int)(iVar8 + ((uint)(iVar8 >> 1) >> 0x1e)) >> 2);
      *(undefined1 *)(iVar6 + 0x3e5) = 1;
      iVar3 = (int)*(char *)(iVar6 + 0x2b5);
      iVar8 = iVar3 - *(char *)(iVar6 + 0x2b4);
      if (((0 < iVar8) && (3 < iVar3)) && (iVar3 < 7)) {
        *(char *)(iVar6 + 0x2b6) = *(char *)(iVar6 + 0x2b6) + '\x01';
      }
      if (((iVar8 < 0) && ('\x02' < *(char *)(iVar6 + 0x2b5))) &&
         ((*(char *)(iVar6 + 0x2b5) < '\x06' && (*(char *)(iVar6 + 0x2b6) != '\0')))) {
        *(char *)(iVar6 + 0x2b6) = *(char *)(iVar6 + 0x2b6) + -1;
      }
      if (*(char *)(iVar6 + 0x2b5) < '\x06') {
        piVar4 = *(int **)(*(int *)(iVar6 + 0x278) + 4);
        (**(code **)(*piVar4 + 0xd8))(piVar4,1);
      }
      else {
        piVar4 = *(int **)(*(int *)(iVar6 + 0x278) + 4);
        (**(code **)(*piVar4 + 0xd8))(piVar4,0);
      }
      if (*(char *)(iVar6 + 0x2b5) < '\x04') {
        piVar4 = *(int **)(*(int *)(iVar6 + 0x274) + 4);
        (**(code **)(*piVar4 + 0xd8))(piVar4,0);
      }
      else {
        piVar4 = *(int **)(*(int *)(iVar6 + 0x274) + 4);
        (**(code **)(*piVar4 + 0xd8))(piVar4,1);
      }
    }
    local_50 = local_74 << 0xc;
    local_54 = ((iVar7 >> 0xc) + uVar5 * 0xc) * 0x1000;
    FUN_0214ce68(*(undefined4 *)(iVar6 + 0x270),&local_54,&local_50);
  }
  if (*(char *)(iVar6 + 0x3e5) != '\0') {
    cVar2 = *(char *)(iVar6 + 0x2b6);
    FUN_02152964(&local_4c,*(undefined4 *)(iVar6 + 0x28));
    iVar7 = (cVar2 * -0x18 + 8) * 0x1000;
    if (iVar7 < local_4c) {
      FUN_02152964(&local_44,*(undefined4 *)(iVar6 + 0x28));
      local_48 = local_44 + -0x6000;
      FUN_02150070(*(undefined4 *)(iVar6 + 0x28),&local_48);
      FUN_02152964(&local_40,*(undefined4 *)(iVar6 + 0x28));
      if (local_40 < iVar7) {
        local_3c = iVar7;
        FUN_02150070(*(undefined4 *)(iVar6 + 0x28),&local_3c);
      }
    }
    FUN_02152964(&local_38,*(undefined4 *)(iVar6 + 0x28));
    if (local_38 < iVar7) {
      FUN_02152964(&local_30,*(undefined4 *)(iVar6 + 0x28));
      local_34 = local_30 + 0x6000;
      FUN_02150070(*(undefined4 *)(iVar6 + 0x28),&local_34);
      FUN_02152964(&local_2c,*(undefined4 *)(iVar6 + 0x28));
      if (iVar7 < local_2c) {
        local_28 = iVar7;
        FUN_02150070(*(undefined4 *)(iVar6 + 0x28),&local_28);
      }
    }
    FUN_02152964(local_24,*(undefined4 *)(iVar6 + 0x28));
    if (local_24[0] == iVar7) {
      *(undefined1 *)(iVar6 + 0x3e5) = 0;
    }
  }
  if (*(char *)(iVar6 + 0x3e3) != '\0') {
    *(undefined1 *)(iVar6 + 0x3e3) = 0;
    local_24[1] = 0;
    piVar4 = *(int **)(*(int *)(*(int *)(iVar6 + 0x27c) + 4) + 0x68);
    (**(code **)(*piVar4 + 0xb8))(piVar4,local_24 + 1);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar6 + 0x27c) + 4) + 0x68) + 0x6c))();
  }
  if (*(char *)(iVar6 + 0x3e4) != '\0') {
    *(undefined1 *)(iVar6 + 0x3e4) = 0;
    local_24[2] = 0;
    piVar4 = *(int **)(*(int *)(*(int *)(iVar6 + 0x280) + 4) + 0x68);
    (**(code **)(*piVar4 + 0xb8))(piVar4,local_24 + 2);
    (**(code **)(**(int **)(*(int *)(*(int *)(iVar6 + 0x280) + 4) + 0x68) + 0x6c))();
  }
  return;
}

