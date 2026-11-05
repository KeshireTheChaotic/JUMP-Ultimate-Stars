
int FUN_02044774(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar4 = param_1;
    if (param_1 != 0) {
      iVar4 = param_1 + 0x58;
    }
    iVar4 = FUN_02045b08(DAT_020a0e64,iVar4);
    if ((iVar4 != 0) || (*(char *)(param_1 + 0x40) == '\0')) {
      iVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))();
      iVar5 = **(int **)(param_1 + 0x20);
      if (iVar4 == 0x52344c50) {
        iVar4 = (*(int **)(param_1 + 0x20))[3];
        uVar1 = (**(code **)(iVar5 + 0x5c))();
        FUN_0203ef0c(*(undefined4 *)(param_1 + 0x4c),param_1,iVar4,*(undefined4 *)(param_1 + 0x50),
                     uVar1,0);
      }
      else {
        iVar4 = (**(code **)(iVar5 + 0x20))();
        if (iVar4 == 0x3450434c) {
          uVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x5c))();
          uVar2 = jus_AllocDebug();
          FUN_020519c8(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc),uVar2);
          DC_FlushRange(uVar2,uVar1);
          FUN_0203ef0c(*(undefined4 *)(param_1 + 0x4c),param_1,uVar2,*(undefined4 *)(param_1 + 0x50)
                       ,uVar1,1);
        }
        else {
          piVar3 = *(int **)(param_1 + 0x6c);
          if (piVar3 == (int *)0x0) {
            piVar3 = (int *)FUN_02016708(0x52344c50,*(undefined4 *)(param_1 + 0x20));
            *(int **)(param_1 + 0x6c) = piVar3;
            iVar4 = piVar3[3];
            uVar1 = (**(code **)(*piVar3 + 0x5c))();
            FUN_0203ef0c(*(undefined4 *)(param_1 + 0x4c),param_1,iVar4,
                         *(undefined4 *)(param_1 + 0x50),uVar1,0);
          }
          else {
            iVar4 = piVar3[3];
            uVar1 = (**(code **)(*piVar3 + 0x5c))();
            FUN_0203ef0c(*(undefined4 *)(param_1 + 0x4c),param_1,iVar4,
                         *(undefined4 *)(param_1 + 0x50),uVar1,0);
          }
        }
      }
      *(undefined1 *)(param_1 + 0x40) = 1;
    }
  }
  FUN_0203add8(*(undefined4 *)(param_1 + 0x70),1,*(undefined4 *)(param_1 + 0x74),
               *(undefined4 *)(param_1 + 0x78),0,0,1,*(undefined4 *)(param_1 + 0x50));
  return param_1;
}

