
/* JUS-CLASS jus_TagIPCT::~jus_TagIPCT [class-type-tag] slot 0/1 of vtable 0209aea0; resets vtables
   (destructor) */

undefined4 *
jus_TagIPCT::~jus_TagIPCT
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  *param_1 = &vftable;
  uVar3 = param_1[0xd];
  iVar1 = FUN_0201a9ec(uVar3);
  if (iVar1 == 0) {
    FUN_0201a958(uVar3,1);
  }
  if (*(char *)((int)param_1 + 0x45) != '\0') {
    iVar4 = *(int *)(param_1[0xc] + 0x1c);
    iVar1 = (**(code **)(**(int **)(iVar4 + 0x30) + 0x10))();
    if (iVar1 != 0) {
      piVar2 = *(int **)(iVar4 + 0x30);
      (**(code **)(*piVar2 + 0x60))(piVar2,0xc,FUN_020137a4,param_1,param_4);
    }
  }
  jus_Class_02097558::jus_Class_02097558(param_1);
  iVar1 = FUN_0201a9ec(param_1);
  if (iVar1 == 0) {
    FUN_0201a958(param_1,1);
  }
  return param_1;
}

