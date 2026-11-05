
void FUN_021c4e40(int param_1)

{
  int iVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_021bda7c(&local_18,param_1);
  local_14 = local_18 + *(int *)(iVar1 + 0x7c);
  FUN_021b956c(param_1,&local_14);
  FUN_021bd8a4(&local_20,param_1);
  local_1c = local_20 + *(int *)(iVar1 + 0x80);
  FUN_021bd884(param_1,&local_1c);
  *(short *)(iVar1 + 0x84) = *(short *)(iVar1 + 0x84) + 1;
  if (*(ushort *)(iVar1 + 0x86) < *(ushort *)(iVar1 + 0x84)) {
    *(char *)(iVar1 + 0x88) = *(char *)(iVar1 + 0x88) + '\x01';
    if (*(char *)(iVar1 + 0x88) == *(char *)(*(int *)(iVar1 + 0x74) + 0xd)) {
      *(undefined1 *)(iVar1 + 0x88) = 0;
    }
    FUN_021c4d68(iVar1);
  }
  return;
}

