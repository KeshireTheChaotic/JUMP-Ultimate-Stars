
void FUN_0201a758(int param_1,int param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  *(int *)(param_1 + 0x400) = param_2 + -0x940;
  iVar3 = param_1 + param_2;
  *(int *)(param_1 + 0x410) = param_2 + -0x940;
  *(undefined2 **)(param_1 + 0x404) = (undefined2 *)(param_1 + 0x4e0);
  *(undefined2 *)(param_1 + 0x4e0) = 0x4d48;
  *(undefined4 *)(*(int *)(param_1 + 0x404) + 0x10) = 0x20;
  *(undefined1 *)(*(int *)(param_1 + 0x404) + 0x1e) = 0;
  *(int *)(*(int *)(param_1 + 0x404) + 4) = iVar3 + -0x440;
  *(undefined4 *)(*(int *)(param_1 + 0x404) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x404) + 0x14) = 0;
  puVar1 = (undefined2 *)(param_1 + 0x500);
  **(undefined2 **)(*(int *)(param_1 + 0x404) + 4) = 0x4d48;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x404) + 4) + 0x10) = 0x20;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x404) + 4) + 0x1e) = 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x404) + 4) + 4) = 0;
  *(int *)(*(int *)(*(int *)(param_1 + 0x404) + 4) + 8) = *(int *)(param_1 + 0x404);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x404) + 4) + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x408) = *(undefined4 *)(*(int *)(param_1 + 0x404) + 4);
  *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 0x400);
  *puVar1 = 0x4648;
  *(int *)(param_1 + 0x40c) = param_1 + 0x4ac;
  *(undefined2 **)(param_1 + 0x4b0) = puVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x40c) + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0xc) = 0x20;
  **(undefined2 **)(param_1 + 0x40c) = 0x4648;
  *(int *)(param_1 + 0x4a4) = iVar3 + -0x420;
  *(undefined4 *)(iVar3 + -0x41c) = 0;
  *(undefined2 **)(*(int *)(param_1 + 0x4a4) + 8) = puVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x4a4) + 0xc) = 0x20;
  **(undefined2 **)(param_1 + 0x4a4) = 0x4648;
  *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_1 + 0x40c);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_1 + 0x4a4);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_1 + 0x4a4);
  uVar2 = DAT_020a0e50;
  DAT_020a0e7c = 0;
  do {
    if (3 < uVar4) {
LAB_0201a8cc:
      uVar2 = 0;
      do {
        iVar3 = uVar2 * 4;
        uVar2 = uVar2 + 1;
        *(undefined4 *)(param_1 + iVar3 + 0x418) = 0;
      } while (uVar2 < 0x20);
      *(undefined1 *)(param_1 + 0x414) = 1;
      return;
    }
    if ((&DAT_020a1680)[uVar4] == 0) {
      (&DAT_020a1680)[uVar4] = param_1;
      if (uVar2 < uVar4 + 1) {
        DAT_020a0e50 = uVar4 + 1;
      }
      goto LAB_0201a8cc;
    }
    uVar4 = uVar4 + 1;
  } while( true );
}

