
int FUN_02152bb4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)thunk_FUN_02151bcc(0x14);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  *piVar1 = (int)&jus_Class_02160ffc::vftable;
  piVar1[1] = 0;
  piVar1[2] = 0;
  *piVar1 = (int)&jus_Class_02161020::vftable;
  iVar2 = FUN_02153c70(piVar1,param_1);
  if (iVar2 == 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    return 0;
  }
  iVar3 = thunk_FUN_02151bcc(0x130);
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = FUN_02153718();
  }
  iVar3 = FUN_02152cdc(iVar2,piVar1,param_2);
  if (iVar3 != 0) {
    return iVar2;
  }
  if (iVar2 != 0) {
    FUN_02153704(iVar2);
    thunk_FUN_021529e0(iVar2);
  }
  return 0;
}

