
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0201a418(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  FUN_0201a548();
  uVar3 = param_3 + 0x3fU & 0xffffffe0;
  for (puVar2 = *(undefined2 **)(param_1 + 0x40c);
      (puVar2 != (undefined2 *)0x0 && (*(uint *)(puVar2 + 6) < uVar3));
      puVar2 = *(undefined2 **)(puVar2 + 2)) {
  }
  uVar5 = *(int *)(puVar2 + 6) - uVar3;
  iVar1 = *(int *)((int)puVar2 + *(int *)(puVar2 + 6) + 8);
  if (uVar5 < 0x21) {
    *(undefined4 *)(*(int *)(puVar2 + 4) + 4) = *(undefined4 *)(puVar2 + 2);
    *(undefined4 *)(*(int *)(puVar2 + 2) + 8) = *(undefined4 *)(puVar2 + 4);
    uVar3 = *(uint *)(puVar2 + 6);
    *(undefined4 *)(puVar2 + 6) = 0;
  }
  else {
    iVar4 = (int)puVar2 + uVar3;
    *(uint *)(iVar4 + 0xc) = uVar5;
    *(undefined2 *)((int)puVar2 + uVar3) = 0x4648;
    *(int *)(*(int *)(puVar2 + 4) + 4) = iVar4;
    *(int *)(*(int *)(puVar2 + 2) + 8) = iVar4;
    *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(puVar2 + 4);
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(puVar2 + 2);
  }
  *(undefined1 *)(puVar2 + 0xf) = 0;
  *(uint *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) - uVar3;
  *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(iVar1 + 4);
  *(int *)(puVar2 + 4) = iVar1;
  *(undefined2 **)(*(int *)(iVar1 + 4) + 8) = puVar2;
  *(uint *)(puVar2 + 8) = uVar3;
  *(undefined4 **)(puVar2 + 10) = param_2;
  *(undefined4 *)(puVar2 + 0xc) = 0;
  *(int *)(puVar2 + 6) = param_1;
  *puVar2 = 0x4d48;
  *(char *)((int)puVar2 + 0x1f) = (char)uVar3 - (char)param_3;
  *(undefined2 **)(iVar1 + 4) = puVar2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = puVar2 + 0x10;
  }
  if (DAT_020a0c35 != '\0') {
    _DAT_04000208 = *(undefined2 *)(param_1 + 0x49c);
  }
  return;
}

