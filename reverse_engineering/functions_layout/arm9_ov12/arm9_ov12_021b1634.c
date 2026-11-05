
undefined4 FUN_021b1634(undefined4 param_1,undefined4 param_2,int param_3,int param_4,char *param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char local_28 [4];
  undefined1 auStack_24 [12];
  int iStack_18;
  
  iVar5 = *(int *)(param_4 + 4);
  if ((param_3 == param_4) || (*(char *)(iVar5 + 0x21) == '\0')) {
    uVar1 = 0;
  }
  else {
    piVar7 = *(int **)(iVar5 + 0x1c);
    if ((int)((uint)*(byte *)((int)piVar7 + 0x29) << 0x18) < 0) {
      uVar1 = 0;
    }
    else {
      piVar6 = *(int **)(param_3 + 4);
      piVar2 = (int *)piVar6[7];
      iStack_18 = param_4;
      if (*(int *)(iVar5 + 0x40) != DAT_02093c24) {
        (**(code **)(*(int *)piVar7[0x14] + 0x50))();
        *(int *)(iVar5 + 0x40) = DAT_02093c24;
        *(undefined1 *)(iVar5 + 0x23) = 0;
      }
      iVar3 = FUN_021acab4(*(undefined4 *)(*(int *)(param_4 + 4) + 0x1c));
      uVar1 = *(undefined4 *)(*(int *)(iVar3 + 4) + 0x50);
      FUN_021b051c(auStack_24);
      DAT_021d5124 = 0;
      iVar3 = (**(code **)(*piVar6 + 0x58))(piVar6,iVar5,param_2,uVar1,auStack_24);
      if (iVar3 == 0) {
        uVar1 = 0;
      }
      else {
        local_28[0] = '\0';
        *(undefined1 *)((int)piVar6 + 0x23) = 1;
        *(undefined1 *)(iVar5 + 0x23) = 1;
        piVar4 = (int *)(**(code **)(*piVar2 + 0xec))();
        (**(code **)(*piVar2 + 0x8c))(piVar2,piVar6,iVar5,param_5);
        if ((piVar2 != piVar4) && (*param_5 == '\0')) {
          (**(code **)(*piVar4 + 0x8c))(piVar4,piVar6,iVar5,param_5);
        }
        piVar2 = (int *)(**(code **)(*piVar7 + 0xec))();
        (**(code **)(*piVar7 + 0x8c))(piVar7,iVar5,piVar6,local_28);
        if ((piVar7 != piVar2) && (local_28[0] == '\0')) {
          (**(code **)(*piVar2 + 0x8c))(piVar2,iVar5,piVar6,local_28);
        }
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

