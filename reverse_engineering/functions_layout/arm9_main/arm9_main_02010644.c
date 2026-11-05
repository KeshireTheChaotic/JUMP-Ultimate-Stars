
undefined4 FUN_02010644(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  do {
    piVar5 = (int *)*param_1;
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    iVar1 = (**(code **)(*piVar5 + 0x38))();
    if (iVar1 == 0) {
      while( true ) {
        uVar2 = param_1[1];
        uVar3 = (**(code **)(*piVar5 + 0x1c))();
        if (uVar3 <= uVar2) break;
        uVar2 = (**(code **)(*piVar5 + 0x14))(piVar5,uVar2);
        if (param_2 == uVar2) {
          param_1[1] = param_1[1] + 1;
          uVar4 = (**(code **)(*piVar5 + 0x58))();
          return uVar4;
        }
        param_1[1] = param_1[1] + 1;
      }
    }
    else {
      uVar2 = (**(code **)(*piVar5 + 0x40))();
      if ((uVar2 <= (param_2 & 0xffffff)) &&
         (uVar2 = (**(code **)(*piVar5 + 0x44))(), (param_2 & 0xffffff) <= uVar2)) {
        uVar2 = (**(code **)(*piVar5 + 0x1c))();
        while ((uint)param_1[1] < uVar2) {
          uVar3 = (**(code **)(*piVar5 + 0x14))();
          if ((uVar3 <= param_2) &&
             (iVar1 = (**(code **)(*piVar5 + 0x3c))(piVar5,param_1[1]), param_2 < uVar3 + iVar1)) {
            iVar1 = param_1[1];
            param_1[1] = iVar1 + 1;
            uVar4 = (**(code **)(*piVar5 + 0x58))(piVar5,iVar1);
            return uVar4;
          }
          param_1[1] = param_1[1] + 1;
        }
      }
    }
    *param_1 = *(int *)(*param_1 + 0x14);
    param_1[1] = 0;
  } while( true );
}

