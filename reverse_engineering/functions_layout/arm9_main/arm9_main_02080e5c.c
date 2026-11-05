
void FUN_02080e5c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_28;
  undefined4 local_24;
  
  FUN_02082330(param_1,param_1 + 0x68);
  for (puVar4 = *(undefined4 **)(param_1 + 0x68); puVar4 != (undefined4 *)0x0;
      puVar4 = (undefined4 *)*puVar4) {
    iVar1 = puVar4[2];
    iVar2 = *(int *)(*(int *)(iVar1 + 0xc) + 0x20);
    iVar3 = *(int *)(*(int *)(iVar1 + 8) + 0x20);
    FUN_02080d28(*(int *)(iVar1 + 8) + 0x3c + (uint)*(byte *)(iVar1 + 0x11) * 8,
                 *(int *)(iVar1 + 0xc) + 0x3c + (uint)*(byte *)(iVar1 + 0x12) * 8,
                 (int)*(short *)(iVar3 + 0x34),(int)*(short *)(iVar3 + 0x36),
                 (int)*(short *)(iVar2 + 0x34),(int)*(short *)(iVar2 + 0x36),&local_24,&local_28);
    FUN_0206c7fc(0x21000d,local_24,local_28,0);
    FUN_0207342c(0x7a,0x2a);
  }
  return;
}

