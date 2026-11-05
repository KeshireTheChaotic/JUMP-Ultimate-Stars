
void FUN_0214fa3c(int param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_1c;
  int local_18;
  
  uVar3 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
  iVar8 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if ((uVar3 < 4) || (6 < uVar3)) {
    if ((7 < uVar3) && (uVar3 < 0x10)) {
      *(uint *)(iVar8 + 0x98) = uVar3;
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar8 + 0x2c) + 4),0);
      func_0x021b6214(*(undefined4 *)(*(int *)(iVar8 + 0x30) + 4),1);
      uVar3 = *(uint *)(*(int *)(param_1 + 4) + 0x124);
      if ((uVar3 < 8) || (0xc < uVar3)) {
        func_0x021b6214(*(undefined4 *)(*(int *)(iVar8 + 0x38) + 4),1);
      }
      else {
        func_0x021b6214(*(undefined4 *)(*(int *)(iVar8 + 0x34) + 4),1);
      }
    }
  }
  else {
    iVar7 = -1;
    uVar5 = *(uint *)(iVar8 + 0x94);
    iVar9 = -1;
    if (uVar5 != uVar3) {
      if ((3 < uVar5) && (uVar5 < 7)) {
        FUN_0214f9dc(iVar8,uVar5,0);
        if (*(int *)(iVar8 + 0x94) == 4) {
          iVar7 = 3;
        }
        if (*(int *)(iVar8 + 0x94) == 5) {
          iVar7 = 4;
        }
      }
      *(undefined4 *)(iVar8 + 0x98) = 0;
    }
    FUN_0214f9dc(iVar8,*(undefined4 *)(*(int *)(param_1 + 4) + 0x124),1);
    *(undefined4 *)(iVar8 + 0x94) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
    iVar4 = (*(int *)(*(int *)(param_1 + 4) + 0x124) + -4) * 0x1c;
    local_1c = *(int *)(&DAT_02169570 + iVar4) << 0xc;
    local_18 = *(int *)(&DAT_0216956c + iVar4) << 0xc;
    FUN_0214f218(*(undefined4 *)(iVar8 + 0x7c),&local_18,&local_1c);
    if (*(int *)(iVar8 + 0x94) == 4) {
      iVar9 = 3;
    }
    if (*(int *)(iVar8 + 0x94) == 5) {
      iVar9 = 4;
    }
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar8 + 0x30) + 4),0);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar8 + 0x34) + 4),0);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar8 + 0x38) + 4),0);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar8 + 0x2c) + 4),1);
    cVar2 = (char)iVar9;
    if (*(char *)(iVar8 + 0xa5) != cVar2) {
      cVar1 = (char)iVar7;
      if (*(int *)(iVar8 + 0xa0) == 0) {
        *(char *)(iVar8 + 0xa4) = cVar1;
        *(char *)(iVar8 + 0xa5) = cVar2;
      }
      else if ((iVar7 < 0) || (*(char *)(iVar8 + 0xa7) != cVar1)) {
        if ((-1 < iVar7) && (*(char *)(iVar8 + 0xa6) == cVar1)) {
          *(char *)(iVar8 + 0xa5) = cVar2;
          goto LAB_0214fcb6;
        }
        if ((-1 < iVar9) && (*(char *)(iVar8 + 0xa7) == cVar2)) goto LAB_0214fcb6;
        if ((iVar9 < 0) || (*(char *)(iVar8 + 0xa6) != cVar2)) {
          *(char *)(iVar8 + 0xa4) = cVar1;
          *(char *)(iVar8 + 0xa5) = cVar2;
          FUN_02028384(*(undefined4 *)(*(int *)(iVar8 + 0xa0) + 4),0x215052d);
        }
        else {
          iVar7 = -1;
          *(undefined1 *)(iVar8 + 0xa7) = 0xff;
          *(undefined1 *)(iVar8 + 0xa4) = 0xff;
          *(char *)(iVar8 + 0xa5) = cVar2;
          FUN_02028384(*(undefined4 *)(*(int *)(iVar8 + 0xa0) + 4),0x215052d);
        }
      }
      else {
        if (iVar7 == 3) {
          FUN_02150448(iVar8,8);
        }
        else if (iVar7 == 4) {
          FUN_02150480(iVar8,8);
        }
        iVar7 = -1;
        *(undefined1 *)(iVar8 + 0xa7) = 0xff;
        *(undefined1 *)(iVar8 + 0xa4) = 0xff;
        *(char *)(iVar8 + 0xa5) = cVar2;
        FUN_02028384(*(undefined4 *)(*(int *)(iVar8 + 0xa0) + 4),0x215052d);
      }
      iVar4 = FUN_02026f94();
      (**(code **)(**(int **)(iVar4 + 4) + 0x24))(*(int **)(iVar4 + 4),iVar8);
      *(int *)(iVar8 + 0xa0) = iVar4;
      if (iVar7 < 0) {
        if (-1 < iVar9) {
          *(char *)(iVar8 + 0xa7) = cVar2;
          if (*(char *)(iVar8 + 0xaa) == '\0') {
            uVar6 = 5;
          }
          else {
            uVar6 = 6;
          }
          FUN_021504b8(iVar8,iVar9,uVar6);
          FUN_02028384(*(undefined4 *)(iVar4 + 4),0x21505a1);
        }
      }
      else {
        *(char *)(iVar8 + 0xa6) = (char)iVar7;
        if (iVar7 == 3) {
          FUN_02150448(iVar8,7);
        }
        else if (iVar7 == 4) {
          FUN_02150480(iVar8,7);
        }
        FUN_02028384(*(undefined4 *)(iVar4 + 4),0x215054d);
      }
    }
  }
LAB_0214fcb6:
  FUN_0214f784(iVar8,*(undefined4 *)(*(int *)(param_1 + 4) + 0x124));
  uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x128))();
  if (((uVar3 & 3) == 3) && (*(char *)(iVar8 + 0xad) == '\0')) {
    FUN_0207342c(0x78);
  }
  return;
}

