
int FUN_0218670c(int *param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  
  iVar5 = *param_1;
  if (param_1 == (int *)0x0) {
    FUN_02002068(s_connection____NULL_021a5c90,s_gpiOperation_c_021a5c50,0,0x22);
  }
  if (*param_1 == 0) {
    FUN_02002068(s__connection____NULL_021a5ca4,s_gpiOperation_c_021a5c50,0,0x23);
  }
  if (param_2 == (uint *)0x0) {
    FUN_02002068(s_operation____NULL_021a5cb8,s_gpiOperation_c_021a5c50,0,0x24);
  }
  uVar3 = param_2[3];
  uVar1 = param_2[4];
  if (uVar3 != 0) {
    if (*param_2 < 5) {
                    /* WARNING: Switch is manually overridden */
      switch(*param_2) {
      case 0:
        puVar2 = (uint *)FUN_0217583c(0x20);
        if (puVar2 == (uint *)0x0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a5c80);
          return 1;
        }
        FUN_02002488(puVar2,0,0x20);
        *puVar2 = param_2[7];
        if (*(int *)(iVar5 + 0x418) == 0x201) {
          puVar4 = (uint *)(iVar5 + 0x1a0);
          puVar2[1] = *puVar4;
          *puVar4 = 0;
        }
        iVar5 = FUN_02183ec4(param_1,uVar3,uVar1,puVar2,param_2,0);
        if (iVar5 != 0) {
          return iVar5;
        }
        break;
      case 1:
        puVar2 = (uint *)FUN_0217583c(8);
        if (puVar2 == (uint *)0x0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a5c80);
          return 1;
        }
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((int)puVar2 + 1) = 0;
        *(undefined1 *)((int)puVar2 + 2) = 0;
        *(undefined1 *)((int)puVar2 + 3) = 0;
        *(undefined1 *)(puVar2 + 1) = 0;
        *(undefined1 *)((int)puVar2 + 5) = 0;
        *(undefined1 *)((int)puVar2 + 6) = 0;
        *(undefined1 *)((int)puVar2 + 7) = 0;
        *puVar2 = param_2[7];
        iVar5 = FUN_02183ec4(param_1,uVar3,uVar1,puVar2,param_2,0);
        if (iVar5 != 0) {
          return iVar5;
        }
        break;
      case 2:
        puVar2 = (uint *)FUN_0217583c(0x204);
        if (puVar2 == (uint *)0x0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a5c80);
          return 1;
        }
        FUN_02002488(puVar2,0,0x204);
        *puVar2 = param_2[7];
        iVar5 = FUN_02183ec4(param_1,uVar3,uVar1,puVar2,param_2,0);
        if (iVar5 != 0) {
          return iVar5;
        }
        break;
      case 3:
        puVar2 = (uint *)FUN_0217583c(0x10);
        if (puVar2 == (uint *)0x0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a5c80);
          return 1;
        }
        iVar5 = 0x10;
        puVar4 = puVar2;
        do {
          *(undefined1 *)puVar4 = 0;
          puVar4 = (uint *)((int)puVar4 + 1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *puVar2 = param_2[7];
        puVar2[3] = 0;
        iVar5 = FUN_02183ec4(param_1,uVar3,uVar1,puVar2,param_2,0);
        if (iVar5 != 0) {
          return iVar5;
        }
        break;
      case 4:
        puVar2 = (uint *)FUN_0217583c(4);
        if (puVar2 == (uint *)0x0) {
          FUN_0218912c(param_1,s_Out_of_memory__021a5c80);
          return 1;
        }
        *(undefined1 *)puVar2 = 0;
        *(undefined1 *)((int)puVar2 + 1) = 0;
        *(undefined1 *)((int)puVar2 + 2) = 0;
        *(undefined1 *)((int)puVar2 + 3) = 0;
        *puVar2 = param_2[7];
        iVar5 = FUN_02183ec4(param_1,uVar3,uVar1,puVar2,param_2,0);
        if (iVar5 != 0) {
          return iVar5;
        }
      }
    }
    else {
      FUN_02002068(&DAT_021a5c4c,s_gpiOperation_c_021a5c50,0,0x6b);
    }
  }
  return 0;
}

