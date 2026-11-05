
void FUN_0214e9a8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = FUN_0207382c();
  if (iVar2 == 0) {
    return;
  }
  cVar1 = *(char *)(iVar3 + 0x19);
  if (cVar1 == '\0') {
    FUN_0215bda0(*(undefined4 *)(iVar3 + 0xc));
  }
  else if (cVar1 == '\x01') {
    ALControllerImp::Create(*(undefined4 *)(iVar3 + 0x10));
  }
  else if (cVar1 == '\x02') {
    FUN_0215fda0(*(undefined4 *)(iVar3 + 0x14));
  }
  *(undefined1 *)(iVar3 + 0x18) = 0;
  if (*(byte *)(iVar3 + 0x19) < 2) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214ea34);
    return;
  }
  FUN_020282f4();
  return;
}

