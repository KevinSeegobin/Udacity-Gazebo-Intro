#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginProj1 : public WorldPlugin
  {
    public: WorldPluginProj1() : WorldPlugin()
            {
              printf("Welcome to Kevin Seegobin's world'\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginProj1)
}
