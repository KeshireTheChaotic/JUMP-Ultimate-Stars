
void FUN_0215f3e0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *(int *)(param_1 + 4) = param_4;
  if (param_4 == 0) {
    return;
  }
  for (puVar3 = *(undefined4 **)(param_4 + 0x558); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    if (*(char *)(puVar3 + 0x10) == '\0') {
      iVar1 = FUN_0215f540(param_1,(int)*(char *)(puVar3[0xd] + 8),
                           *(undefined1 *)((int)puVar3 + 0x41));
      *(undefined4 **)(iVar1 + 8) = puVar3 + 4;
      *(int *)(iVar1 + 0x10) = 1 << (param_5 & 0xff);
      *(undefined1 *)(iVar1 + 0x14) = 0xa2;
      *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 1;
      if (*(short *)(*(int *)(iVar1 + 8) + 0x1e) != 0) {
        FUN_02073744();
      }
      if (*(short *)(*(int *)(iVar1 + 8) + 0x20) != 0) {
        FUN_02073744();
      }
      *(char *)(iVar1 + 0x19) = (char)*(undefined4 *)(param_1 + 0x1b0);
      iVar2 = *(int *)(param_1 + 0x1b0);
      *(int *)(param_1 + 0x1b0) = iVar2 + 1;
      *(int *)(param_1 + iVar2 * 4 + 0x17c) = iVar1;
    }
    else if (*(char *)(puVar3 + 0x10) == '\x01') {
      iVar1 = FUN_0215f540(param_1,(int)*(char *)(puVar3[0xd] + 8),
                           *(undefined1 *)((int)puVar3 + 0x41));
      *(undefined4 **)(iVar1 + 8) = puVar3 + 4;
      *(int *)(iVar1 + 0x10) = 0x10 << (param_5 & 0xff);
      *(undefined1 *)(iVar1 + 0x14) = 0xa1;
      if (*(short *)(*(int *)(iVar1 + 8) + 0x20) != 0) {
        FUN_02073744();
      }
      iVar2 = *(int *)(param_1 + 0x1b4);
      *(int *)(param_1 + 0x1b4) = iVar2 + 1;
      *(int *)(param_1 + iVar2 * 4 + 0x18c) = iVar1;
    }
  }
  FUN_0215f578(param_1,param_2,param_3);
  FUN_0215f364(**(undefined4 **)(param_1 + 0x174),1);
  *(undefined1 *)(param_1 + 0x1c1) = 1;
  return;
}

