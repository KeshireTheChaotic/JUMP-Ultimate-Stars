
/* JUS-CLASS jus_TagFFL4::jus_TagFFL4 [class-type-tag] stores vtable 02096850 into *this
   (constructor) */

int * jus_TagFFL4::jus_TagFFL4(int *param_1,int param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  jus_TagFFL4_Part_02096958::jus_TagFFL4_Part_02096958();
  iVar4 = 0;
  *param_1 = (int)&vftable;
  piVar1 = (int *)param_4[5];
  if ((int *)piVar1[8] != (int *)0x0) {
    iVar4 = piVar1[9];
    piVar1 = (int *)piVar1[8];
  }
  param_1[0xb] = 0;
  piVar5 = param_4;
  if (piVar1 != (int *)0x0) {
    piVar5 = (int *)piVar1[7];
    iVar4 = (**(code **)(*piVar1 + 0x28))(piVar1,iVar4 + (uint)*(ushort *)(param_4 + 6));
    param_1[0xb] = iVar4;
  }
  iVar4 = (**(code **)(*param_4 + 0x28))();
  param_1[0xb] = param_1[0xb] + iVar4;
  FUN_02064744(param_1 + 0xc);
  iVar4 = FUN_0203a0f0(piVar5);
  if (iVar4 == 0) {
    piVar1 = (int *)FUN_0203341c(piVar5[4],0,0);
    uVar2 = FUN_0203a0f0();
    FUN_0203a264(&local_20,uVar2);
    (**(code **)(*piVar1 + 0xc))();
  }
  else {
    uVar2 = FUN_0203a0f0(piVar5);
    FUN_0203a264(&local_20,uVar2);
  }
  FUN_02064550(param_1 + 0xc,local_20,uStack_1c);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  iVar4 = (**(code **)(*param_4 + 0x2c))(param_4,0);
  iVar3 = (**(code **)(*param_4 + 0x28))();
  FUN_02051890(iVar4 + iVar3,param_1[3],param_2 << 2);
  return param_1;
}

