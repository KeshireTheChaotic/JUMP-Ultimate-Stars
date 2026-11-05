
void FUN_021527ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int local_30;
  int local_2c;
  undefined4 uStack_28;
  
  iVar6 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  piVar5 = (int *)(iVar3 + 0x9c);
  puVar4 = *(undefined4 **)(*(int *)(iVar3 + 0x94) + 0x558);
  uStack_28 = param_4;
  if (puVar4 != (undefined4 *)0x0) {
    for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)*puVar4) {
      piVar5[1] = (int)puVar4;
      piVar5[3] = (int)(&PTR_FUN_02171ce8)[*(byte *)(puVar4 + 0x10)];
      *(undefined2 *)(piVar5 + 4) = *(undefined2 *)((int)puVar4 + 0x16);
      *(undefined2 *)((int)piVar5 + 0x12) = *(undefined2 *)(puVar4 + 6);
      *(byte *)(piVar5 + 5) = (*(byte *)((int)puVar4 + 0xe) & 0xf) + *(char *)((int)puVar4 + 0x43);
      *(char *)((int)piVar5 + 0x15) =
           (char)((int)(*(byte *)((int)puVar4 + 0xe) & 0xf0) >> 4) + *(char *)(puVar4 + 0x11);
      *(byte *)((int)piVar5 + 0x16) = *(byte *)((int)puVar4 + 0xe) & 0xf;
      *(char *)((int)piVar5 + 0x17) = (char)((int)(*(byte *)((int)puVar4 + 0xe) & 0xf0) >> 4);
      uVar2 = (uint)*(byte *)(piVar5 + 5);
      iVar1 = *(int *)(*(int *)(iVar3 + 0x98) +
                       (uVar2 + (uint)*(byte *)((int)piVar5 + 0x15) * 5) * 4 + 0x14);
      *piVar5 = iVar1;
      if (iVar1 != 0) {
        uVar2 = (uint)*(byte *)(puVar4 + 0x10);
      }
      if (iVar1 != 0 && uVar2 != 2) {
        iVar1 = CommonHSV::CommonHSV_Create(iVar1,8);
        piVar5[2] = iVar1;
      }
      *(int *)(iVar3 + 0x25c) = *(int *)(iVar3 + 0x25c) + 1;
      *(char *)(piVar5 + 5) = (char)piVar5[5] * '0';
      *(char *)((int)piVar5 + 0x15) = *(char *)((int)piVar5 + 0x15) * '0';
      if (*(char *)(puVar4 + 0x10) == '\0') {
        local_30 = (*(byte *)((int)piVar5 + 0x15) + 7) * 0x1000;
        local_2c = (*(byte *)(piVar5 + 5) + 0xe) * 0x1000;
        FUN_021519d0(*(undefined4 *)(iVar3 + iVar6 * 0x14),&local_2c,&local_30);
        *(char *)(piVar5 + 6) = (char)iVar6;
        iVar6 = iVar6 + 1;
      }
      *(undefined1 *)((int)piVar5 + 0x19) = 0;
      piVar5 = piVar5 + 7;
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02152974);
  }
  return;
}

