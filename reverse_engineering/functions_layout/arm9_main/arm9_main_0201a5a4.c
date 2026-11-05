
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0201a5a4(int param_1,int *param_2,int param_3,int param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_5 != '\0') {
    FUN_0201a548();
  }
  uVar7 = param_3 + 0x3fU & 0xffffffe0;
  for (uVar4 = *(uint *)(param_1 + 0x4a4);
      ((uVar4 != 0 && (*(uint *)(uVar4 + 0xc) < uVar7)) ||
      ((param_4 == 0 && (*(uint *)(param_1 + 0x4a8) < uVar4)))); uVar4 = *(uint *)(uVar4 + 8)) {
  }
  iVar5 = *(int *)(uVar4 + *(int *)(uVar4 + 0xc) + 8);
  uVar2 = *(int *)(uVar4 + 0xc) - uVar7;
  *(uint *)(uVar4 + 0xc) = uVar2;
  if (uVar2 < 0x20) {
    iVar6 = *(int *)(uVar4 + 8);
    *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(uVar4 + 4);
    *(int *)(*(int *)(uVar4 + 4) + 8) = iVar6;
    iVar6 = *(int *)(uVar4 + 0xc);
    *(undefined4 *)(uVar4 + 0xc) = 0;
    uVar7 = uVar7 + iVar6;
  }
  iVar6 = *(int *)(uVar4 + 0xc);
  iVar3 = uVar4 + iVar6;
  *(undefined1 *)(iVar3 + 0x1e) = 1;
  *(uint *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) - uVar7;
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(iVar5 + 4);
  *(int *)(iVar3 + 8) = iVar5;
  *(int *)(*(int *)(iVar5 + 4) + 8) = iVar3;
  *(uint *)(iVar3 + 0x10) = uVar7;
  *(int **)(iVar3 + 0x14) = param_2;
  *(undefined4 *)(iVar3 + 0x18) = 0;
  *(int *)(iVar3 + 0xc) = param_1;
  *(undefined2 *)(uVar4 + iVar6) = 0x4d48;
  *(char *)(iVar3 + 0x1f) = (char)uVar7 - (char)param_3;
  *(int *)(iVar5 + 4) = iVar3;
  if (param_2 != (int *)0x0) {
    *param_2 = iVar3 + 0x20;
  }
  cVar1 = '\0';
  if (param_5 != '\0') {
    cVar1 = DAT_020a0c35;
  }
  if (param_5 != '\0' && cVar1 != '\0') {
    _DAT_04000208 = *(undefined2 *)(param_1 + 0x49c);
  }
  return;
}

