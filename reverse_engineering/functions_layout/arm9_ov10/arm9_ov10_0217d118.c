
void FUN_0217d118(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar2 = FUN_02178448();
  if ((iVar2 != 0) && (param_1 != 0)) {
    FUN_02179e44();
    FUN_02175744(param_1,param_2);
    FUN_02177ea4(1,&DAT_021a4b88,0);
    iVar2 = FUN_02178448();
    cVar1 = *(char *)(iVar2 + 0x15);
    iVar2 = FUN_02178448();
    iVar2 = *(int *)(iVar2 + 0x204);
    iVar3 = FUN_02178448();
    iVar4 = FUN_02178448();
    uVar5 = FUN_02177f3c(*(undefined4 *)(iVar4 + 0x204));
    iVar4 = FUN_02178448();
    (**(code **)(iVar3 + 0x45c))
              (param_1,0,iVar2 == 0,cVar1 == '\x02',uVar5,*(undefined4 *)(iVar4 + 0x460));
    FUN_0217c5dc();
  }
  return;
}

