import * as common from "@nestjs/common";
import * as swagger from "@nestjs/swagger";
import * as nestAccessControl from "nest-access-control";
import { PokemonService } from "./pokemon.service";
import { PokemonControllerBase } from "./base/pokemon.controller.base";

@swagger.ApiTags("pokemon")
@common.Controller("pokemon")
export class PokemonController extends PokemonControllerBase {
  constructor(
    protected readonly service: PokemonService,
    @nestAccessControl.InjectRolesBuilder()
    protected readonly rolesBuilder: nestAccessControl.RolesBuilder
  ) {
    super(service, rolesBuilder);
  }
}
