
int * FUN_020433ec(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*param_2 + 0x2c))(param_2,0,*(code **)(*param_2 + 0x2c),param_4,param_4);
  piVar2 = (int *)(**(code **)(*DAT_020a0dfc + 8))();
  switch(*(byte *)(iVar1 + 5) & 0x7f) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  case 3:
    if ((*(byte *)(iVar1 + 5) & 0x80) == 0) {
      piVar3 = (int *)FUN_02016628(param_2,*(undefined2 *)(iVar1 + 8));
      (**(code **)(*piVar2 + 0x28))(piVar2,piVar3);
      (**(code **)(*piVar3 + 0xc))();
    }
    else {
      piVar3 = (int *)FUN_020165dc(*(undefined4 *)(iVar1 + (uint)*(ushort *)(iVar1 + 8)));
      (**(code **)(*piVar2 + 0x28))(piVar2,piVar3);
      (**(code **)(*piVar3 + 0xc))();
    }
    iVar4 = (**(code **)(*DAT_020a0dd0 + 0x74))();
    if (iVar4 == 0) {
      FUN_02043678(piVar2,*(undefined2 *)(iVar1 + 6),iVar1 + 10);
    }
    else {
      FUN_02043678(piVar2,*(undefined2 *)(iVar1 + 6),iVar1 + 10);
      if (*(char *)(iVar1 + 4) == '\x02') {
        *(undefined1 *)(piVar2 + 0x1f) = 1;
      }
    }
    break;
  case 4:
    goto LAB_02043514;
  case 5:
    goto LAB_02043514;
  case 6:
LAB_02043514:
    piVar3 = (int *)FUN_02016628(param_2,*(undefined2 *)(iVar1 + 8));
    (**(code **)(*piVar2 + 0x28))(piVar2,piVar3);
    (**(code **)(*piVar3 + 0xc))();
    iVar4 = (**(code **)(*piVar2 + 0x68))();
    if (iVar4 == 0) {
      piVar3 = (int *)jus_AllocDebug(0x70);
      if (piVar3 != (int *)0x0) {
        TextureImpInstance_Derived_020965e0::TextureImpInstance_Derived_020965e0
                  (piVar3,DAT_020a1704,0,0);
        *piVar3 = (int)&jus_Class_02096568::vftable;
      }
    }
    else {
      piVar3 = piVar2;
    }
    FUN_02044dfc(piVar3,iVar1 + 10,*(undefined2 *)(iVar1 + 6));
    if ((byte)(*(char *)(iVar1 + 5) - 5U) < 2) {
      iVar4 = (**(code **)(*param_2 + 0x2c))(param_2,0);
      piVar3[0x17] = iVar4 + (*(ushort *)(iVar1 + 6) + 1) * 4 + 8;
      piVar3[0x18] = (uint)*(ushort *)(iVar1 + 8) - ((*(ushort *)(iVar1 + 6) + 1) * 4 + 8);
      if (*(char *)(iVar1 + 5) == '\x06') {
        piVar3[0x19] = 2;
      }
    }
    iVar1 = (**(code **)(*piVar2 + 0x68))();
    if (iVar1 == 0) {
      FUN_02043c7c(piVar2,piVar3);
      FUN_020324dc(&DAT_020a1d78,piVar3);
      (**(code **)(*piVar3 + 0xc))();
    }
  }
  (**(code **)(*piVar2 + 0x54))(piVar2,param_2);
  return piVar2;
}

