
void FUN_0217a0cc(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  FUN_02177ea4(1,&DAT_021a4b88,0);
  iVar1 = FUN_0217914c();
  if (iVar1 == 0) {
    FUN_0217c5dc();
    iVar1 = FUN_02178448();
    if (*(int *)(iVar1 + 0x204) == 0) {
      iVar1 = FUN_02178448();
      if (*(char *)(iVar1 + 0x15) == '\x02') {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 1;
    }
    iVar1 = FUN_02178448();
    iVar1 = *(int *)(iVar1 + 0x204);
    iVar2 = FUN_02178448();
    iVar3 = FUN_02178448();
    uVar4 = FUN_02177f3c(*(undefined4 *)(iVar3 + 0x204));
    iVar3 = FUN_02178448();
    (**(code **)(iVar2 + 0x45c))(0,1,iVar1 == 0,uVar5,uVar4,*(undefined4 *)(iVar3 + 0x460));
    iVar1 = FUN_02178448();
    *(undefined1 *)(iVar1 + 0x1a1) = 0;
  }
  return;
}

